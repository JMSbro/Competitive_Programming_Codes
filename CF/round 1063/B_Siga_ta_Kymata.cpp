
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
#define f first
#define s second
#define mp make_pair
#define endl '\n'
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()
#define mid(l,r) ((r+l)/2)
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
#define gcd(a,b) __gcd(a,b)
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
    int n;
    cin >> n;
    vi v(n + 1), pos(n+1);
    // for(auto &u: v) cin >>  u;
    for(int i = 1; i <= n; i++){
        cin >> v[i];
        pos[v[i]] = i;
    }

    string s;
    cin >> s;

    if(s[0] == '1' || s[n-1]== '1'){
        cout << -1 << endl;
        return;
    }

    vector<pair<int,int>> vp,ans;
    int cnt = 0, ocnt = 0;
    for(int i= 1;i < n - 1; i++){
        if(s[i] == '1' && (v[i+1] == 1 || v[i+1] == n)){
            cout << -1 << endl;
            return;
        }
        // else if(s[i] == '1') {
        //     cnt++;
        //     if(cnt > 5) {
        //         cout << -1 << endl;
        //         return;
        //     }
        //     for(int j = i - 1, k = i + 1;(k < n && j >= 0); j--, k++){
        //         if((v[i] > v[j] && v[i] < v[k]) || (v[i] < v[j] && v[i] > v[k])){
        //             vp.push_back({j, k});
        //             break;
        //         }
        //     }
        // }
    }
    vp.push_back({pos[v[1]], pos[1]});
    vp.push_back({pos[v[1]], pos[n]});
    // vp.push_back({pos[v[1]], pos[v[n]]});
    vp.push_back({min(pos[1],pos[n]), max(pos[n],pos[1])});
    vp.push_back({pos[1], pos[v[n]]});
    // vp.push_back({pos[1], pos[v[1]]});
    // vp.push_back({pos[n], pos[1]});
    // vp.push_back({pos[n], pos[v[1]]});
    vp.push_back({pos[n], pos[v[n]]});
    // vp.push_back({pos[v[n]], pos[1]});
    // vp.push_back({pos[v[n]], pos[v[1]]});
    // vp.push_back({pos[v[n]], pos[n]});

    for(int i = 0; i < vp.size(); i++){
         ans.push_back({vp[i].f, vp[i].s});
    }
    // sort(all(ans));
    // int sz = unique(all(ans)) - ans.begin();
    // dbg(sz);
    int sz = ans.size();
    // dbg(ans);

    if(sz == 0) cout << 0 << endl;
    else {
        cout << sz << endl;
        for(int i = 0; i < sz ; i++){
            cout << ans[i].f << ' ' << ans[i].s << endl;
        }
    }
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
