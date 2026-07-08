
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
    int n, m;
    cin >>n >> m;

    //taking the input 
    ll ar[n+1][m+1];
    vl row(n+1), col(m+1);
    for(int i = 1;i <= n; i++){
        for(int j = 1;j <= m; j++){
            cin >> ar[i][j];
        }
    }


    //calculating the row xor values
    for(int i = 1;i <= n; i++){
            ll tmp = 0;
        for(int j = 1;j <= m; j++){
            tmp ^= ar[i][j];
        }
        row[i] = tmp;
    }


    //calculating the coloumn xor values
    for(int i = 1;i <= m; i++){
            ll tmp = 0;
        for(int j = 1;j <= n ;j++){
            tmp ^= ar[j][i];
        }
        col[i] = tmp;
    }

    //getting that row and col which has the highest xor values
    ll mr = max_element(all(row)) - row.begin() ;
    ll mc = max_element(all(col)) - col.begin() ;

    //calculating the xor values wihtout the intersecction point value
    // of the  row and coloum consists of highest xor value
    //so we will get the replacing value as val1 or val2 which will ba used 
    //to make the xor value of the highest row or the col as 0.
    ll val1 = 0, val2 = 0;
    for(int i = 1; i <= m; i++){
        if(i != mc) val1 ^= ar[mr][i];
    }
    for(int i = 1; i <= n; i++){
        if(i != mr) val2 ^= ar[i][mc];
    }

    //dbg(val1, val2);
    ll a = 0, b = 0;

    //calcualting the xor values after placing replacing values by row and col 
    ll tmp1 = val2;
    for(int i = 1; i <= m; i++){
        if(i != mc) tmp1 ^= ar[mr][i];
    }
    int tmp2 = val1;
    for(int i = 1; i <= n; i++){
        if(i != mr) val2 ^= ar[i][mc];
    }

    //one of the replacing value will give less xor value as one of  
    // row and col and vice-verca can be 0 and non-negative as in test 3.
    //then replacing the intersection point with that smaller xor giving val.
    if(tmp1 < tmp2){
        ar[mr][mc] = val1;
    }
    else ar[mr][mc] = val2;

    //recalculating all the col and row xor values. 
    for(int i = 1;i <= n; i++){
            ll tmp = 0;
        for(int j = 1;j <= m; j++){
            tmp ^= ar[i][j];
        }
        row[i] = tmp;
    }



    for(int i = 1;i <= m; i++){
            ll tmp = 0;
        for(int j = 1;j <= n ;j++){
            tmp ^= ar[j][i];
        }
        col[i] = tmp;
    }

    //summation of all the row and col xor values.
    ll ans = accumulate(all(row), 0LL) + accumulate(all(col), 0LL);
    cout << ans << endl;

    //dbg(ar);dbg(row); dbg(col);
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
