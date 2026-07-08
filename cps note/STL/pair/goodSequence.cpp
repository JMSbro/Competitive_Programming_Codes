#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction cout << fixed << setprecision
#define mem(a,b) memset(a,b,sizeof(a))
#define pb push_back()

int main()
{
    optimize();
    int n;
    cin >> n;

    for(int i = 0; i < n ; i++){
        cin >> v[i];
    }
    map<int,int> m;
    for(auto u : v) m[u]++;
    int cnt = 0;
    for(auto u : m) {
        if(u.second >= u.first) cnt += (u.second - u.first);
        else cnt += u.second;
    }
    cout << cnt << endl;
    return 0;
}
