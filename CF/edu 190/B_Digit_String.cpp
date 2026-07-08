
//In the name of ALLAH

#include<bits/stdc++.h>
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <map>
// #include <set>
// #include <iomanip>
// #include <cmath>
// #include <cstring>
// #include <queue>
// #include <stack>
// #include <utility>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
template<typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;
//use less_equal for ordered multiset

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define pb push_back
#define F first
#define S second
#define mp make_pair
#define endl '\n'
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()
#define mid(l,r) (l + (r - l) / 2)
#define left(node) (node*2)
#define right(node) (node*2+1)
#define mx_int_prime 999999937
#define  yes  cout << "YES\n";
#define  no  cout << "NO\n";
#define fill(x) for(auto &u: x) cin >> x;
#define allprint(x) for(auto u: x) cout << u << ' '; cout << endl;
#define print(x) cout << x << endl;
#define f(i, j, n, k) for (int i = j; i < n; i = i + k)

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define mem(a,b) memset(a, b, sizeof(a) )
//#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define frac(n) cout << fixed << setprecision(n)
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

typedef vector<int>::iterator vit;
typedef set<int>::iterator sit;


int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};
//int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
//int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};



template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p ) {
            return os << "(" << p.first << ", " << p.second << ")";
}

template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v ) {
            os << "{";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "}";
}

template < typename T >
ostream &operator << ( ostream & os, const set< T > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "]";
}

template < typename T >
ostream &operator << ( ostream & os, const multiset< T > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "]";
}

template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << it -> first << " = " << it -> second ;
                                            }
                    return os << "]";
}

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)

void faltu () {
            cerr << endl;
}

template <typename T>
void faltu( T a[], int n ) {
            for(int i = 0; i < n; ++i) cerr << a[i] << ' ';
                cerr << endl;
}

template <typename T, typename ... hello>
void faltu( T arg, const hello &... rest) {
            cerr << arg << ' ';
                faltu(rest...);
}

/// no debugger for stack , queue and priority queue. also no iterator for them
/// comment cin >> t for single test case

void solve(){
    string s; cin >> s;

    ll sz = (int)s.size(), ans = INT_MAX, four = 0;

    ll even = 0, odd = 0, two = 0;
    for(char c: s){
        if(c == '2'){
            even++;
            two++;
        }
        else if(c == '4'){
            four++;
        }
    }
    ans = min(ans, even);

    for(char c: s){
        if(c == '1' || c == '3'){
            odd++;
            ans = min(ans, odd - 1 + even);
        }
        else if(c == '2'){
            even--;
            ans = min(ans, odd + even);
        }
        
    }
    //if(ans == INT_MAX) ans = 0;
    if(odd == 0 || two == 0) ans = 0;
    cout << ans + four << endl;
    // vi v(sz + 1, 0);

    // for(int i = 0; i < sz; i++){
    //     if(s[i] == '4') {
    //         ans++;
    //         v[i] = 1;
    //     }
    // }

    // ll l = 0, r = 1, one = 0;
    // while(l < sz && r < sz){
    //     if(s[l] == '1' || s[l] == '3'){
    //         if(s[r] == '2'){
    //             v[l] = 1;
    //             l++;
    //             one++;
    //         }
    //         else{
    //             r++;
    //         }
    //     }
    //     else l++, r = l+1;
    // }
    // //dbg(ans, one);
    // ll la = sz - 1, ra = sz - 2, two = 0;
    // while(la >= 0 && ra >= 0){
    //     if(s[la] == '2'){
    //         if(s[ra] == '1' || s[ra] == '3'){
    //             v[la] = 1;
    //             la--;
    //             two++;
    //         }
    //         else{
    //             ra--;
    //         }
    //     }
    //     else la--, ra = la-1;
    // }
    // //dbg(two);

    // if(two <= one){
    //     ans += two;
    // }else {
    //     ans+= one;
    //     // for(int i = 0; i < sz; i++){
    //     //     if(s[i] == '2') v[i] = 0;
    //     // }
    // }

    // ll lb = 0, rb = 1, thr = 0;
    // while(lb < sz && rb < sz){
    //     if(s[lb] == '3'){
    //         if(s[rb] == '2' && v[rb] != 1){
    //             v[lb] = 1;
    //             lb++;
    //             thr++;
    //         }
    //         else{
    //             rb++;
    //         }
    //     }
    //     else lb++, rb = lb+1;
    // }

    // ll lc = sz - 1, rc = sz - 2, tw = 0;
    // while(lc >= 0 && rc >= 0){
    //     if(s[lc] == '2' && v[lc] != 1){
    //         if(s[rc] == '3'){
    //             //v[l] = 1;
    //             lc--;
    //             tw++;
    //         }
    //         else{
    //             rc--;
    //         }
    //     }
    //     else lc--, rc = lc-1;
    // }

    // if(tw <= thr){
    //     cout << ans + tw << endl;
    //     return;
    // }else ans+= thr;

    //cout << ans << endl;
}

int main()
{
    optimize();
    int t = 1;
    cin >> t;
    // if(t == 99858){
    //   for(int i = 1; i <= t; i++){
    //     if(i == 27556) {
    //         int n,k;
    //         cin >> n >> k;
    //         cout << n << k;
    //     }
    //     else {
    //         int n,k;
    //         cin >> n >> k;
    //     }
    //   }
    // }
    // else {
    //     while(t--){
    //         solve();
    //     }
    // }
    while(t--){
        solve();
    }
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// #define endl '\n'
// #define int long long
// const int MOD = 1e9 + 7;

// #ifndef ONLINE_JUDGE
// #define debug(x) cerr << #x << " "; _print(x); cerr << endl;
// #else
// #define debug(x)
// #endif

// void _print(int t) { cerr << t; }
// void _print(string t) { cerr << t; }
// void _print(char t) { cerr << t; }
// void _print(long double t) { cerr << t; }
// void _print(double t) { cerr << t; }
// void _print(unsigned long long t) { cerr << t; }
// // Base case for printing basic data types
// template <class T> void _print(T t) { cerr << t; }

// // Specializations for common STL containers
// template <class T> void _print(vector<T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
// template <class T> void _print(set<T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
// template <class T> void _print(multiset<T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
// template <class T> void _print(stack<T> v) { vector<T> t; while (!v.empty()) t.push_back(v.top()), v.pop(); reverse(t.begin(), t.end()); _print(t); }
// template <class T> void _print(queue<T> v) { vector<T> t; while (!v.empty()) t.push_back(v.front()), v.pop(); _print(t); }

// template <class T, class V> void _print(pair<T, V> p) { cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}"; }
// template <class T, class V> void _print(map<T, V> v) { cerr << "[ "; for (auto i : v) { _print(i); cerr << " "; } cerr << "]"; }
// template <class T, class V> void _print(unordered_map<T, V> v) { cerr << "[ "; for (auto i : v) { _print(i); cerr << " "; } cerr << "]"; }


// // Functions start here
// int power(int A, int B) {
//     if (B == 0) return 1;
//     int res = (power(A, B / 2) % MOD);
//     if (B % 2) return ((res * res)%MOD * A) % MOD;
//     else return (res * res) % MOD;
// }

// int gcd(int a, int b) {
//     while (b != 0) {
//         int temp = b;
//         b = a % b;  // remainder
//         a = temp;
//     }
//     return a;
// }


// void SieveOfEratosthenes(int n) {
//     bool prime[n + 1];
//     memset(prime, true, sizeof(prime));
//     for (int p = 2; p * p <= n; p++) {
//         if (prime[p] == true) {
//             for (int i = p * p; i <= n; i += p)
//                 prime[i] = false;
//         }
//     }
// }

// class DSU {
//     vector<int> parent, rank;

// public:
//     DSU(int n) {
//         parent.resize(n);
//         rank.resize(n, 0);
//         for (int i = 0; i < n; ++i)
//             parent[i] = i;
//     }

//     int find(int x) {
//         if (parent[x] != x)
//             parent[x] = find(parent[x]);
//         return parent[x];
//     }

//     void unite(int x, int y) {
//         int px = find(x);
//         int py = find(y);
//         if (px == py) return;
//         if (rank[px] < rank[py]) {
//             parent[px] = py;
//         } else if (rank[px] > rank[py]) {
//             parent[py] = px;
//         } else {
//             parent[py] = px;
//             rank[px]++;
//         }
//     }

//     bool connected(int x, int y) {
//         return find(x) == find(y);
//     }
// };
// //     DSU dsu(10);
// // dsu.unite(1, 2);
// //dsu.connected(1, 3) ?

// class SegmentTree {
//     vector<int> tree;
//     int n;

// public:
//     SegmentTree(const vector<int>& arr) {
//         n = arr.size();
//         tree.resize(4 * n);
//         build(arr, 0, 0, n - 1);
//     }

//     // Build the segment tree
//     void build(const vector<int>& arr, int node, int start, int end) {
//         if (start == end) {
//             tree[node] = arr[start];  // Leaf node
//         } else {
//             int mid = (start + end) / 2;
//             build(arr, 2 * node + 1, start, mid);
//             build(arr, 2 * node + 2, mid + 1, end);
//             tree[node] = max(tree[2 * node + 1], tree[2 * node + 2]);
//         }
//     }

//     // Query maximum in range [l, r]
//     int query(int l, int r) {
//         return queryUtil(0, 0, n - 1, l, r);
//     }

// private:
//     int queryUtil(int node, int start, int end, int l, int r) {
//         if (r < start || end < l) {
//             return INT_MIN;  // Out of range
//         }
//         if (l <= start && end <= r) {
//             return tree[node];  // Completely inside
//         }
//         int mid = (start + end) / 2;
//         int leftMax = queryUtil(2 * node + 1, start, mid, l, r);
//         int rightMax = queryUtil(2 * node + 2, mid + 1, end, l, r);
//         return max(leftMax, rightMax);
//     }

// public:
//     // Update value at index idx to val
//     void update(int idx, int val) {
//         updateUtil(0, 0, n - 1, idx, val);
//     }

// private:
//     void updateUtil(int node, int start, int end, int idx, int val) {
//         if (start == end) {
//             tree[node] = val;
//         } else {
//             int mid = (start + end) / 2;
//             if (idx <= mid)
//                 updateUtil(2 * node + 1, start, mid, idx, val);
//             else
//                 updateUtil(2 * node + 2, mid + 1, end, idx, val);
//             tree[node] = max(tree[2 * node + 1], tree[2 * node + 2]);
//         }
//     }
// };
// //    SegmentTree st(arr);
// //    st.query(1,3); // 0 based

// // Main function
// signed main() {
//     ios::sync_with_stdio(0);
//     cin.tie(0); cout.tie(0);

// #ifndef ONLINE_JUDGE
// if (!freopen("Error.txt", "w", stderr)) {
//     cerr << "Failed to redirect stderr!" << endl;
// }
// #endif

// /*
//     all 32
//     all 4
//     all 12
//     12222333
//     2222*
//     333*

//     FInal
//     all 4
//     3->2
//     1->2
// */

//     int t;
//     cin >> t;
//     while (t--) {
//         debug("STTTTTTTTTTTTTTTTTTTTTTTTT")
//         // 
//         string s; cin>>s;
//         // 312222213131313133312
//         int ans =0; 
//         int n = s.size();
//         vector<int> f(n+1),e(n+1);
//         for(int i =0 ;i<n;i++){
//             if(s[i] == '4'){ans++; }
//             if(i!=0)f[i] = f[i-1];
//             if(s[i] == '1' || s[i] == '3')
//             f[i] += 1;
//         }
//         debug(ans)
//         for(int i = n-1;i>=0;i--){
//             // if(s[i] == '4')continue;
//             e[i] = e[i+1];
//             if(s[i] == '2')e[i]++;
//         }
//         debug(f) debug(e)
//         int tot =INT_MAX;
//         for(int i =0;i<=n;i++){
//             if(i == 0){
//                 tot = min(tot,e[i]);
//             }
//             else
//                 tot = min(tot,f[i-1]+e[i]);
//         }

//         debug(tot)
//         ans += tot;
//         cout <<ans <<endl;


//     }
//     return 0;
// }
