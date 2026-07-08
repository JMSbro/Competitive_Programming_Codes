#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n)
#define mem(a,b) memset(a,b,sizeof(a))
#define pb push_back()

int main()
{
    optimize();
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >>n >> x;
        vector<int> v(n+10);
        int mx = 0;
        v[n+1] = x;
        for(int i = 1;i <= n+1 ; i++){
            if(i < n+1) cin >> v[i];
            if(i <= n){
                    if((v[i] - v[i-1]) > mx) mx = (v[i] - v[i-1]);
            }
            else {
                if(2*(v[i] - v[i-1]) > mx) mx = 2*(v[i] - v[i-1]);
            }

        }
        cout << mx << endl;
    }
    return 0;
}
