#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define frac(n) cout << fixed << setprecision(n)
#define mem(a,b) memset(a,b,sizeof(a))
#define pb push_back()

int main()
{
    optimize();
    int n, q;
    cin >> n >> q;
    map<int,int> m;
    map<pair<int,int>, int > qu;
    set<pair<int,int>> s;
    queue<int> ans;
    for(int i = 1; i <= n; i++){
        int a;
        cin >> a;
        m[i] = a;
    }
    int cnt = 0;
    for(int i = 0; i < q; i++){
        char c;
        int a, b;
        int cnt = 0;
        cin >> c >> a >> b;
        if(c == '!') {
            int cmp = m[a];
            m[a] = b;
            for(auto u : s){
                if(cmp >= u.first && cmp <= u.second) {
                if(b < u.first || b > u.second){
                    int x = u.first, y = u.second;
                    qu[{x,y}]--;
                    }
                }
            }
        }
        else {
            if(s.count({a,b})){
                ans.push( qu[ {a,b} ] );
            }
            else {
                s.insert( {a,b} );
                for(int i = 1; i <= n; i++){
                    if(m[i] >= a && m[i] >= b) cnt++;
                }
                qu[ {a,b} ] = cnt;
                ans.push( qu[ {a,b} ] );
                cnt = 0;
            }
        }
    }
    while(!ans.empty()){
        cout << ans.front() << endl;
        ans.pop();
    }
    return 0;
}

