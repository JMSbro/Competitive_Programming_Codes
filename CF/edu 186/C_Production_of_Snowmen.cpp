#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long
const int MOD = 1000000007;
#define sz(x) (ll)(x).size()
auto rd = []() { ll x; cin >> x; return x; };
#define dbg(x) cerr << "[" #x "]  " << (x) << "\n"
// #define errv(x) {cerr << "["#x"]  ["; for (const auto& ___ : (x)) cerr << ___ << ", "; cerr << "]\n";}
// #define cerr if(0)cerr
#define xx first
#define yy second
mt19937 rnd(std::chrono::high_resolution_clock::now().time_since_epoch().count());

void Solve()
{
    ll n;
    cin >> n;
    deque<ll> a(n), b(n), c(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> c[i];
    }
    ll ab = 0, bc = 0;
    for (int i = 0; i < n; i++) {
        bool isOk = true;
        for (int j = 0; j < n; j++) {
            // if (a[j] >= b[(i + j) % n]) {
            //     isOk = false;
            //     break;
            // }
            if(a[j] >= b[j]){
                isOk = false;
                break;
            }
        }
        b.push_front(b.back());
        b.pop_back();
        if (isOk)
            ab++;
    }
    for (int i = 0; i < n; i++) {
        bool isOk = true;
        for (int j = 0; j < n; j++) {
            // if (b[j] >= c[(i + j) % n]) {
            //     isOk = false;
            //     break;
            // }
            if(b[j] >= c[j]){
                isOk = false;
                break;
            }
        }
        c.push_front(c.back());
        c.pop_back();
        if (isOk)
            bc++;
    }
    cout << n * ab * bc << '\n';
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "Case #" << i << ": "; // cout << "Case " << i << ": ";
        Solve();
    }
    return 0;
}
// Coded by Tahsin Arafat (@TahsinArafat)