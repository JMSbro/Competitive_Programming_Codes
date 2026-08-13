// UVA 11466


#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define db long double
#define vii vector<ll>
#define pll pair<ll, ll>
#define F first
#define S second


const ll N = (ll) 3e7 + 5;
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
        
        ll n, tmp;

        cin >> n;
        tmp = n;

        // n can be negative, wasn't clearly mentioned in the statement, caused the unexpected wrong answers.
        if(n < 0)
            n *= -1;

        if(n == 0)
            break;

        v.clear();

        
        ll ans = 0;
        ll cnt = 0; // koyta different prime diye vag kora jay chekc korar jonno

        //prime[i] diye check kortesi so, primes[i] * primes[i] diye check kortesi.
        for(ll i = 0; primes[i] * primes[i] <= n; i++) {

            // n ke
            // primes[i] diye, jotobar kora jay

            while(n % primes[i] == 0) {
                n /= primes[i];
                ans = max(ans, primes[i]);
            }

            if(ans == primes[i]) {
                // how many different primes divides n
                cnt += 1;
            }


        }

        if(n > 1) {
            cnt += 1;
            ans = max(ans, n);
        }

		// If n consists of one prime, like 3, or 8(only consits of prime 2)
        if(cnt < 2) {
            ans = -1;
        }

        cout << ans << "\n";
        
    }
}