// UVA 583


#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define db long double
#define vii vector<ll>
#define pll pair<ll, ll>
#define F first
#define S second


const ll N = (ll) 1e6 + 5;
const ll mod = (ll) 1e9 + 7;
const ll inf = (ll) 1e18;

bitset<N> isPrime;
vector<ll> primes;

vector<int> v;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    for(int i = 3; i < N; i += 2) {
        isPrime[i] = 1;
    }
    for(ll i = 3; i * i < N; i += 2) {
        for(int j = i * i; j < N; j += i + i) {
            isPrime[j] = 0;
        }
    }
    primes.push_back(2);
    for(int i = 3; i < N; i += 2) {
        if(isPrime[i])
            primes.push_back(i);
    }






    int t = 1, T = 0;
    // cin >> t;

    while(true) {
        // cout << "Case #" << ++T << ": ";
        
        ll n;
        cin >> n;

        if(n == 0)
            break;

        v.clear();

        cout << n << " = ";

        if(n < 0) {
            n *= -1;
            cout << "-1 x ";
        }

        //prime[i] diye check kortesi so, primes[i] * primes[i] diye check kortesi.
        for(ll i = 0; primes[i] * primes[i] <= n; i++) {

            // n ke
            // primes[i] diye, jotobar kora jay

            while(n % primes[i] == 0) {

                v.push_back(primes[i]);
                n /= primes[i];
            }
        }

        // n er man vag hoite hoite 1 na hole, n o ekta prime.
        if(n > 1) {
            v.push_back(n);
        }


        for(ll i = 0; i < v.size(); i++) {
            cout << v[i];
            if(i != v.size() - 1) {
                cout << " x ";
            } else {
                cout << "\n";
            }
        }
        
    }
}