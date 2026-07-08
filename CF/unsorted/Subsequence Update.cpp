#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction cout << fixed << setprecision
#define mem(a,b) memset(a,b,sizeof(a))
#define pb(a) push_back(a)

int main()
{
    optimize();
    int t;
    cin >> t;

    while(t--){
        int n, l, r, m = 0, mid = 0, add = 0, miniid = 0, mini = INT_MAX;
        cin >> n >> l >>r;
        vector<int> v(n+1);
        for(int i = 1;i <= n; ++i){
            cin >> v[i];
        }
        vector<int> lf, rg;
        for(int i = 1;i <= r;i++ ){
            lf.pb(v[i]);
        }
        for(int i = l; i <= n;i++){
            rg.pb(v[i]);
        }
        sort(lf.begin(),lf.end());
        sort(rg.begin(), rg.end());
        ll sl = 0, sr = 0;
        for(int i = 0;i < (r-l+1); i++){
            sl += lf[i];
            sr += rg[i];
        }
        ll df = min(sl,sr);
        cout << df << endl;
    }
    return 0;
}
