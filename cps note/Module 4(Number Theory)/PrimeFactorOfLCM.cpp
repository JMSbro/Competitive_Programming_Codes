//SPOJ-MAIN12B


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
    cin >> t;

    while(t--) {
        cout << "Case #" << ++T << ": ";
        ll a, b, c, i, j, k, m, n, o, x, y, z;
        cin >> n;
        set<ll> st;
        //My style: keep a vec for given numbers, mark the max num.
        //Doesn't work coz if a given num is itself prime and it is 
        //bigger than 10^6 which is the largest stored prime, it can not
        //detect or store it, giving WA.
        // vector<ll> v(n);

        // for(auto &u: v) cin >> u;
        // sort(v.begin(), v.end());

        // for(j = 0; j < primes.size() && primes[j] <= v[n-1]; j++) {
        //     for(int i = 0; i < n; i++){
        //         a = v[i];

        //         if(a % primes[j] == 0) {
        //             st.insert(primes[j]);
        //             break;
        //         }
            
        //     }
        // }
        for(i = 0; i < n; i++) {
            cin >> a;

            for(j = 0; primes[j] * primes[j] <= a; j++) {
                if(a % primes[j] == 0) {
                    st.insert(primes[j]);
                }
                while(a % primes[j] == 0) {
                    a /= primes[j];
                }
            }
            if(a != 1) {
                st.insert(a);
            }
        }

        cout << st.size() << "\n";
        for(ll ii : st) {
            cout << ii << "\n";
        }
    }
}