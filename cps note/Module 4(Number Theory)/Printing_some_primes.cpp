// Spoj TDPRIMES solution


#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define db long double
#define vii vector<ll>
#define pll pair<ll, ll>
#define F first
#define S second


const ll N = (ll) 1e8 + 5;
bitset<N> isPrime;
//isPrime[i] = 1 means prime
//isPrime[i] = 0 means composite

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while(t--) {
        int n = 1e8;
        
        // Assume all odd numbers are prime
        for(int i = 3; i <= n; i += 2){
            isPrime[i] = 1;
        }
        isPrime[2] = 1;
        int root = sqrt(n) + 2;
        for(int i = 3; i <= root; i += 2){
            for(int j = i * i; j <= n; j += 2 * i){
                isPrime[j] = 0;
            }
        }

        int cnt = 0;
        for(int i = 2; i <= n; i++){
            if(isPrime[i] == 0) continue;
            cnt++;
            if(cnt % 100 == 1) cout << i << endl;
        }
    }
    return 0;
}