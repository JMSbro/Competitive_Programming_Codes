
// In the name of ALLAH

#include <bits/stdc++.h>
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
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// use less_equal for ordered multiset

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
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
#define all(a) (a).begin(), (a).end()
#define sz(x) (int)x.size()
#define mid(l, r) (l + (r - l) / 2)
#define left(node) (node * 2)
#define right(node) (node * 2 + 1)
#define mx_int_prime 999999937
#define yes cout << "YES\n";
#define no cout << "NO\n";

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define mem(a, b) memset(a, b, sizeof(a))
// #define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define frac(n) cout << fixed << setprecision(n)
#define file()                        \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

typedef vector<int>::iterator vit;
typedef set<int>::iterator sit;

int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};
// int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
// int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};

template <typename F, typename S>
ostream &operator<<(ostream &os, const pair<F, S> &p)
{
    return os << "(" << p.first << ", " << p.second << ")";
}

template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v)
{
    os << "{";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << *it;
    }
    return os << "}";
}

template <typename T>
ostream &operator<<(ostream &os, const set<T> &v)
{
    os << "[";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << *it;
    }
    return os << "]";
}

template <typename T>
ostream &operator<<(ostream &os, const multiset<T> &v)
{
    os << "[";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << *it;
    }
    return os << "]";
}

template <typename F, typename S>
ostream &operator<<(ostream &os, const map<F, S> &v)
{
    os << "[";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << it->first << " = " << it->second;
    }
    return os << "]";
}

#define dbg(args...)            \
    do                          \
    {                           \
        cerr << #args << " : "; \
        faltu(args);            \
    } while (0)

void faltu()
{
    cerr << endl;
}

template <typename T>
void faltu(T a[], int n)
{
    for (int i = 0; i < n; ++i)
        cerr << a[i] << ' ';
    cerr << endl;
}

template <typename T, typename... hello>
void faltu(T arg, const hello &...rest)
{
    cerr << arg << ' ';
    faltu(rest...);
}

/// no debugger for stack , queue and priority queue. also no iterator for them
/// comment cin >> t for single test case

void solve()
{
    int n;
    cin >> n;
    vi a(n), v(n);
    for (auto &u : a)
        cin >> u;
    for (auto &u : v) cin >> u;

    int st = -1, end = -1;
    for(int i = 0; i < n; i++){
        if(a[i] != v[i]){
            if(st == -1) st = i;
            else {
                end = i;
                //break;
            }
        }
        if(end != -1 && a[i] == v[i]) break;
    }

    //dbg(st , end);
    for(int i = st - 1; i >= 0; i--){
        if(v[i] <= v[i+1]) st = i;
        else break;
    }

    if(end == n-1 ){
        cout << st+1 << ' ' << end+1 << endl;
        return;
    }

    for(int i= end + 1; i < n;  i++){
        if( v[i] >= v[i-1]) end = i;
        else break;
    }

    cout << st+1 << ' ' << end+1 << endl;
    // deque<int> d;
    // int l = 0, r = 1, len = sz(d), mx = 0, lf = -1, rg = -1;
    // d.push_back(v[l]);
    // while (r <= n - 1)
    // {
    //     if (v[r - 1] <= v[r])
    //     {
    //         d.push_back(v[r]);
    //     }
    //     else
    //     {
    //         len = sz(d);
    //         if (len > mx)
    //         {
    //             mx = len;
    //             lf = l + 1;
    //             rg = r;
    //         }
    //         l = r;
    //         d.clear();
    //         d.push_back(v[r]);
    //     }
    //     r++;
    // }
    //  len = sz(d);
    // if (len > mx)
    // {
    //     mx = len;
    //     lf = l + 1;
    //     rg = r;
    //     //l = r;
    // }

    // if(lf == -1 && rg == -1){
    //     cout << 0 << ' ' << 0 << endl;
    //     return;
    // }
    //int l = -1, r = -1;
    // for(int i = 0; i < n; i++){
    //     if(a[i] != v[i]){
    //         if(l == -1){
    //             l = i;
    //         }
    //         else{
    //             r = i;
    //             break;
    //         }
    //     }
    // }
    //cout << lf << " " << rg << endl;

    // ll n;
	// 	cin >> n; // Read the size of the array
	// 	ll arr[n];
	// 	ll arr2[n];

	// 	// Read the original array
	// 	for (int i = 0; i < n; i++) {
	// 		cin >> arr[i];
	// 	}

	// 	// Read the modified array
	// 	for (int i = 0; i < n; i++) {
	// 		cin >> arr2[i];
	// 	}

	// 	int change1 = -1, change2 = -1;

	// 	// Find the first and last positions where the arrays differ
	// 	for (int i = 0; i < n; i++) {
	// 		if (arr[i] != arr2[i]) {
	// 			if (change1 == -1) {
	// 				change1 = i; // First differing position
	// 			} else {
	// 				change2 = i; // Last differing position
	// 				break;
	// 			}
	// 		}
	// 	}

	// 	// Extend the left boundary of the subarray if possible
	// 	int i = change1 - 1;
	// 	while (i >= 0) {
	// 		if (arr2[i] <= arr2[i + 1]) {
	// 			i--;
	// 		} else {
	// 			break;
	// 		}
	// 	}
	// 	change1 = i + 1;

	// 	// If no second change was found, assume the end of the array
	// 	if (change2 == -1) {
	// 		change2 = n - 1;
	// 	}

	// 	// Extend the right boundary of the subarray if possible
	// 	int j = change2 + 1;
	// 	while (j < n) {
	// 		if (arr2[j] >= arr2[j - 1]) {
	// 			j++;
	// 		} else {
	// 			break;
	// 		}
	// 	}
	// 	change2 = j - 1;

	// 	// Output the 1-based indices of the subarray
	// 	cout << change1 + 1 << " " << change2 + 1 << endl;
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
    while (t--)
    {
        solve();
    }
    return 0;
}
