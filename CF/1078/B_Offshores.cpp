
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
    ll n, x, y;
    cin>> n >> x >> y;

    vi v(n);
    ll sum = 0;
    for(int i = 0;i < n; i++){
        cin >> v[i];
        sum += (v[i] / x) * y;
    }

    ll mx = LLONG_MIN;
    for(int i = 0;i < n; i++){
        mx = max(mx, sum - ((v[i] / x) * y) + v[i]);
    }

    cout << mx << endl;
    // vl v, v1(n);
    // ll sum = 0;
    // for(int i = 0;i < n; i++){
    //     //cin >> v[i];
    //     //c[i] = v[i];
    //     ll a;
    //     cin >> a;
    //     if(a%x == 0) v1.pb(a);
    //     else v.pb(x);
    // }
    // sort(all(v));
    // sort(all(v1));
    // if(v.size() == 0){
    //     for(int i = 0; i < (int)v1.size() - 1; i++){
    //     ll tmp = v1[i];
    //     v1[i] = v1[i] - ((v1[i]/x) * x);
    //     v1[i+1] += (tmp/x) * y;
    //     //dbg(v);
    //     }
    //     sum += v1[(int)v1.size() - 1];
    //     cout << sum << endl;
    //     return;
    // }
   
    //     for(int i = 0; i < (int)v.size() - 1; i++){
    //     ll tmp = v[i];
    //     v[i] = v[i] - ((v[i]/x) * x);
    //     v[i+1] += (tmp/x) * y;
    //     //dbg(v);
    //     }
    //     sum += v[(int)v.size() - 1];

    //     if(v1.size() != 0) {
    //         ll b = accumulate(all(v1), 0LL);
    //         sum += (b/x) * y;
    //     }
            
    //     cout << sum << endl;

    // ll tmp1 = v[n-1];
    // v[n-1] = v[n-1] - ((v[n-1]/x) * x);
    // //dbg(v[0]);
    // v[0] = v[0] + (tmp1/x) * y;
    // // dbg(v[n-1]);
    //  dbg(v);
    // for(int i = 0; i< n - 2; i++){
    //     ll tmp = v[i];
    //     v[i] = v[i] - ((v[i]/x) * x);
    //     v[i+1] += (tmp/x) * y;
    //     dbg(v);
    // }
    // //dbg(v);
    // ll ans;
    // n == 2 ? ans = v[0] : ans = v[n-2];
    // cout << ans << endl;
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
