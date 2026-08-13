//To start prime factorization from the first prime that divides n
//for example: 143 can be first divided by 11, so no need to check
//if 143 can be divided by 2, 3, 5 etc. we will start from 11

// Prime Factorization using harmonic series loops


#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define db long double
#define vii vector<ll>
#define pll pair<ll, ll>
#define F first
#define S second


const ll N = (ll) 3e5 + 5;
const ll mod = (ll) 1e9 + 7;
const ll inf = (ll) 1e18;

int min_prime[N + 5];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while(t--) {
        // ll a, b, c, i, j, k, m, n, o, x, y, z;

        for(ll i = 2; i < N; i++) {

            // 0 na houa mane visit hoise, so prime na.
            if(min_prime[i] != 0) {
                continue;
            }

            for(ll j = i; j < N; j += i) {

                // 0 na hoile already min prime exist kore
                if(min_prime[j] == 0) {
                    min_prime[j] = i;
                }
            }
        }


        int q;
        cin >> q;
        while(q--) {
            int n;
            cin >> n;

            cout << n << " : ";

            while(n != 1) {
                cout << min_prime[n] << " ";
                n /= min_prime[n];
            }
            cout << "\n";
        }

    }
}