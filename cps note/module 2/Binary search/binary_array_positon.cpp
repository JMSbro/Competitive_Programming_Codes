
//In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;

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

// CODE STARTS FROM HERE.

int pos(vi &v, int n){
    int l = 0, r = n - 1, ans = -1;
    while(l <= r){
        int mid = (l + r) / 2;
        if(v[mid] == 1) {
            ans = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    } return ans + 1; // + 1 korsi jate 0 baseed position na dekhaya 1 based position dekhay. vector e 0 based e save korsi.
}
/// no debugger for stack , queue and priority queue. also no iterator for them
int main()
{
    optimize();
    int n;
    cin >> n;
    vi v(n);
    for(auto &u: v){
        cin >> u;
    }

    cout << pos(v,n) << endl;

    return 0;
}
