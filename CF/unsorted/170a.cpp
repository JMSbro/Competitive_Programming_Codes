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
    /*string s,c = "WECNITK";
    cin >> s;
    if(s == c) cout << "Welcome to Web Club!" << endl;
    else cout << "Access denied" << endl;*/
    int t ;
    cin >> t;
    while(t--){
        int n,x, mx = 0, mn = INT_MAX;
        cin >> n >> x;
        vector<int> v(n+1);
        for(int i = 1; i <= n; ++i){
            cin >> v[i];
            if(v[i] > mx) mx = v[i];
            if(v[i] < mn) mn = v[i];
        }
        if(mn+(x*(n-1)) >= mx) {
            cout << mn+(x*(n-1)) << endl;
        }
        else cout << mx << endl;
    }

    return 0;
}
