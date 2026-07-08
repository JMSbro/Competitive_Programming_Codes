#include <bits/stdc++.h>
#include <chrono>
#define fast ios_base::sync_with_stdio(false)
#define f(i, j, n, k) for (int i = j; i < n; i = i + k)
#define fast2 cin.tie(0)
#define fast1 cout.tie(0)
#define vint vector<int>
#define vchar vector<char>
#define vpint vector<pair<int, int>>
#define vvint vector<vector<int>>
#define pqiii priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>>
#define pqii priority_queue<pair<int, pair<int, int>>>
#define pqivi priority_queue<pair<int, vector<int>>, vector<pair<int, vector<int>>>, greater<pair<int, vector<int>>>>
#define pb push_back
typedef long long ll;
typedef long double ld;
#define mii map<int, int>
#define umii unordered_map<int, int>
#define all(x) x.begin(), x.end()
#define srt(x) sort(x.begin(), x.end())
#define trs(x) sort(x.begin(), x.end(), greater<int>())
#define seti set<int>
#define set(x, y) x.insert(y)
#define gcd(x, y) __gcd(x, y)
#define lcm(x, y) (x * y / __gcd(x, y))
#define int long long
using namespace std;

struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

template <typename T> void print(T t) { cout << t << endl; }
template <typename T, typename... Args> void print(T t, Args... args) {
    cout << t << ", ";
    print(args...);
}
template <typename T> void printv(vector<T> &v) {
    for (auto &i : v) {
        cout << i << " ";
    }
    cout << endl;
}
void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }

ll binpow(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
struct FenwickTree {
    vector<int> bit;
    int n;
    void init(int n) {
        this->n = n;
        bit.assign(n+1, 0);
    }
    FenwickTree() {}
    int sum(int x) {
        int ans = 0;
        for (; x>0; x -= x & -x) {
            ans+= bit[x];
        }
        return ans;
    }
    void upd(int x, int y) {
        for (; x <= n; x+= x & -x) {
            bit[x]+= y;
        }
    }
    int sum(int l, int r) {
        return sum(r) - sum(l-1);
    }
    void build(const vector<int> &a) {
        init(a.size());
        for (int i = 1; i <= n; i++) {
            upd(i, a[i-1]);
        }
    }
};

signed main() {
    fast;
    fast1;
    fast2;
    int t;
    cin >> t;
    while (t--) {
        int a,n;
        cin>>a>>n;
        vint v(n);
        for(auto &x: v) cin>>x;
        string s = to_string(a);
        int l = s.size();
        int ans = LLONG_MAX;
        if(l>1) {
            int x=0;
            f(i,0,l-1,1) {
                x*=10;
                x+= v[1];
            }
            ans= min(ans, abs(a - x));
        }
        int y;
        if(v[0] != 0) y= v[0];
        else y = v[1];
        f(i,0,l,1) {
            y*=10;
            y+= v[0];
        }
        ans= min(ans, abs(a-y));

        int curr= 0;
        bool b=1;
        f(i,0,l,1) {
            int dig = s[i] - '0';
            for(auto x: v) {
                if(x>dig) {
                    int tryy = curr*10 + x;
                    f(j,i+1,l,1) {
                        tryy*=10;
                        tryy+= v[0];
                    }
                    ans= min(ans,abs(a- tryy));
                } else if(x<dig) {
                    int tryy = curr*10 + x;
                    f(j,i+1,l,1) {
                        tryy*=10;
                        tryy+= v[1];
                    }
                    ans= min(ans,abs(a- tryy));
                }
            }
            if(dig != v[0] && dig!= v[1]) {
                b=0;
                break;

            }
            curr=curr*10+ dig;
        }
        if(b) ans=0;
        cout<<ans<<endl;
    }
}