#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define fraction(a) fixed<<setprecision(a)<<
#define mem(a,b) memset(a,b,sizeof(a))
typedef long long ll;
typedef double dl;


int main()
{
    optimize();
    int t;
    cin >> t;
    while(t--){
    int n, mx = 0;
    cin >> n;
    int a[n];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        if(a[i] > mx) mx = a[i];
    }
    int ans;
    if(n%2) ans = ((n/2) + 1) + mx;
    cout << ans << endl;
    }
    return 0;
}

