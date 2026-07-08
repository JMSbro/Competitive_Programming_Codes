
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
    int n; cin >> n;
    vi v(n),mid;
    for(auto &u: v) cin >> u;
    int mx = -1;

    for(int i = 1; i < n; i++){
        //dbg(v[i-1]);
        if(v[i-1] > v[i]) {
            mx = max(mx, v[i-1] - v[i]);
            //dbg(mx);
        }
    }
    //dbg(mx);

    for(int i = 1; i < n; i++){
        if(v[i-1] > v[i]) v[i] += mx;
    }

    for(int i = 1; i < n; i++){
        if(v[i-1] > v[i]) {
            no return;
        }
    }

    yes
    // int mxid = -1, mx = -1, fg = 0, ok = 1;
    // for(int i = 0; i < n; i++){
    //     cin >> v[i];
    //     if(v[i] >= mx){
    //         mx = v[i];
    //         //mxid = i;
    //     }
    //     if(!i){
    //         if(v[i-1] > v[i]) fg++;
    //         else fg = 0;

    //         if(fg > 1) ok = 0;
    //     }
    // }
    // if(!ok){
    //     no 
    //     return;
    // }

    // for(int i = 0; i < n; i++){
    //     if(v[i] == mx) mid.pb(i);
    // }

    // set<int> s;
    // sort(all(mid));
    // //dbg(mxid);
    // for(int j = 0; j < mid.size(); j++){
    //     int ck = 0;
    //     int last;
    //     j == (int)mid.size() - 1 ? last = n : last = mid[j+1];
    //     for(int i = mid[j] + 1; i < last; i++){
    //         if(i == 0) break;
    //         if(v[i-1] > v[i]) {
    //             ck++;
    //             //dbg(i);
    //         }
    //         if(ck > 1){
    //             no
    //             //cout << "ekha" << endl;
    //             return;
    //         }
    //     }
    // }

    // for(int i = 1; i < n; i++){
    //     if(v[i-1] > v[i]) {
    //         s.insert(v[i-1] - v[i]);
    //     }
    // }

    // if((int)s.size() == 1 || (int)s.size() == 0) yes
    // else no
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
