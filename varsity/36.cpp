#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction cout << fixed << setprecision
#define mem(a,b) memset(a,b,sizeof(a))

int main()
{
    optimize();
    int t;
    cin >> t;
    while(t--){
        int n;
        vector<string> v;
        cin >> n;
        for(int i = 1; i <= n; i++){
            string s;
            cin >> s;
            v.push_back(s);
        }
        sort(v.begin(), v.end());
        for(auto u : v) cout << u << endl;
    }
    return 0;
}
