// SPOJ-DCEPC505


#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define db long double
#define vii vector<ll>
#define pll pair<ll, ll>
#define F first
#define S second


const ll N = (ll) 11000000 + 5, k = 2e6 + 5;
const ll mod = (ll) 1e9 + 7;
const ll inf = (ll) 1e18;



bitset<N> prime;
//int prime[N], ac[N];
vector<int> v, primes, ans;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int sq = sqrt(N) + 5;

    for(int i = 3; i < N; i += 2) {
        prime[i] = 1;
    }
    prime[2] = 1;
    for(int i = 3; i < sq; i++) {
        if(prime[i] == 0)
            continue;
        for(int j = i * i; j < N; j += 2 * i) {
            prime[j] = 0;
        }
    }

    
    // for(int i = 2; i < sq; i++) {
    //     if(prime[i] == 0)
    //         continue;
    //     for(long long j = i * (i + 1); j < N; j += i) {
    //         if(prime[j / i] == 1) {
    //             ac[j] = 1;
    //         }
    //     }
    // }

    // for(int i = 6; i < N; i++) {
    //     if(ac[i] == 1) {
    //         v.push_back(i);
    //     }
    // }

    ///my solution : 
    for(int i = 1; i < N ; i++){
        if(prime[i]) primes.push_back(i);
    }

    int sz = (int)primes.size();
    for(int i = 0; i < sz; i++){
        for(int j = i + 1; j < sz; j++){
            long long prod = (long long)primes[i] * primes[j];
            if(prod > N) break;   // N = your sieve/answer bound
            ans.push_back(prod);
        }
    }   

    sort(ans.begin(), ans.end());
    //cout << ans.size() << endl; //size is 2085981
    // cerr << v.size() << "\n";

    // cerr << v[0] << "\n";
    

    int t = 1;
    cin >> t;

    while(t--) {
        ll a, b, c, i, j, k, m, n, o, x, y, z;
        cin >> n;
        //cout << v[n - 1] << "\n"; //tutor's
        //mine: 
        cout << ans[n-1] << "\n";
    }
}