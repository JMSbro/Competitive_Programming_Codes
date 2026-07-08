
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




int main()
{
    
        int n;
        cin >>n ;
        vi v(n);
        for(auto &u: v) cin >> u;

        int x;
        cin >> x;

        auto it = lower_bound(all(v), x);
        auto at = upper_bound(all(v), x);
        cout << it - v.begin() << endl;
        cout << at - v.begin() << endl;
        // suppose an array = { 1, 2, 4, 4, 4, 6, 6, 9}, find LB and UB of 4.
        //LB gives the idx of the first of the fours i.e. 2 (0 based idx)
        //and UB gives the a[i] > 4 th idx i.e. 5 (coz here 6 is strictly greater than 4).
        //bounds e dewa elemt oi array te na thaakle tar poer boro element er idx return kore
        //in both lower and upper bound.
        
        // cout << it - v.begin() << endl; will show the index of the first
        // 4 element, but 0 based index.

        // same for upper bound. tobe UB er theke LB er iterator minus korle koyta element
        // ase ta dekha jay.

        // cout << boolalpha << binary_search(all(v), x) dile jodi x thake vector tay 
        // taile true return korbe, noile false return korbe.

        //sobgular TIME COMPLEXITY O(logn); sobkhetre array sorted thaka lagbe.
        // array te iterator nai tai pointer return dibe. idx chaile (it - a) diye output 
        // ana ja hobe 0 based index. 
        // another thing is the function will be lower_bound(a, a + n, x).

    
    return 0;
}
