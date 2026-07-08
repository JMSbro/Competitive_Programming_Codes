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
    int n, k;
    cin >> n >> k;
    ll ans, sum = 0;
    if(n == 1) cout << n << endl;
    else{
        for(int i = 1; ;i++){
            ans = k * i;
        for(ll j = ans; j < k * (i + 1); j++ ){

        for(int i = 0; ; i++){
            sum += j/pow(k,i);
            if(j/pow(k,i) == 0) break;
        }

        if(sum >= n){
            cout << ans << endl;
            return 0;
        }
        else sum = 0;
        }
    }
    }
    return 0;
}

