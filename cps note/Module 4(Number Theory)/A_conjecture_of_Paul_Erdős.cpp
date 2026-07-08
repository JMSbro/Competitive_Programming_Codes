
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
#define fill(x) for(auto &u: x) cin >> u;
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

/// no debugger for stack , queue and priority queue. also no iterator for them
/// comment cin >> t for single test case
const ll N  = 1e7 + 5;
bitset<N> isPrime;
vector<int> v(N);

void solve(){
    int n; cin >> n;
    cout << v[n] << endl;
}

int main()
{
    optimize();
    int t = 1;
    cin >> t;

    isPrime[2] = 1;
for (int i = 3; i <= N; i += 2)
    isPrime[i] = 1;

int root = sqrt(N);

for (int i = 3; i <= root; i += 2) {
    if (!isPrime[i]) continue;

    for (long long j = 1LL * i * i; j <= N; j += 2 * i) {
        isPrime[j] = 0;
    }
}
    v[0] = 0;
    for(int i = 1; i<= N ; i++){
        if(isPrime[i]) {
            for(int j = 1;  j < i; j++){
                ll y = 1ll * j * j*  j* j;
                if(y > i) break;
                ll rest = i - y;
                ll sq = sqrt(rest);
                
                while(sq * sq < rest) sq++;
                if(sq * sq == rest) {
                    v[i] = 1;
                    break;
                }
            }
        }
    }

    for(int i = 1; i <= N; i++){
        v[i] += v[i-1];
    }
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
