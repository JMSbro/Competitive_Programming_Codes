
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
ll a[100000+9];
void solve(){
    int n;
    cin >> n;
    vi p(n+1), q(n+1);
    vii mp(n+1), mq(n+1);
    mp[0] = {0,0};
    mq[0]= {0,0};

    int id = 0, mx = 0;
    for(int i= 1; i <= n; i++){
        cin >> p[i];
        if(p[i] >= mp[i-1].first){
            mp[i] = {p[i], i};
            id = i;
            mx = p[i];
        }
        else mp[i] = {mx, id};

    }

    int idx = 0, mmx = 0;
    for(int i= 1; i <= n; i++){
        cin >> q[i];
        if(q[i] >= mq[i-1].first){
            mq[i] = {q[i], i};
            idx = i;
            mmx = q[i];
        }
        else mq[i] = {mmx, idx};

    }
    // dbg(mp);
    // dbg(mq);
    for(int i = 1; i <= n; i++){
        if(mp[i].f > mq[i].f){
            cout << (a[mp[i].f] + a[q[i - mp[i].s + 1]] ) % 998244353<< ' ';
        }
        else if(mp[i].f < mq[i].f){
            cout << ( a[mq[i].f] + a[p[i - mq[i].s + 1]] ) % 998244353<< ' ';
        }
        else {
            if(q[i - mp[i].s + 1] < p[i - mq[i].s + 1]){
                cout << ( a[mq[i].f] + a[p[i - mq[i].s + 1]] ) % 998244353<< ' ';
            }
            else {
                cout << (a[mp[i].f] + a[q[i - mp[i].s + 1]] )  % 998244353 << ' ';
            }
        }
    } cout << endl;

    // for(int i = 0; i < n; i++){
    //     ll mx = 0;
    //     for(int j = 0; j <= i; j++){
    //         mx = max(mx, a[p[j]] + a[q[i -j]]) ;
    //     }
    //     cout << mx << " ";
    // } cout << endl;

}


void base(){
    a[0] = 1;
    for(ll i = 1; i <= 100000; i++){
        a[i] = (a[i-1] * 2) % 998244353;
    }
}

int main()
{
    optimize();
    base();
    // for(int i = 0; i <= 5 ;i++){
    //     cout << a[i] << endl;
    // }
    int t;
    cin >> t;
    while(t--){
        solve();
    } 
    return 0;
}
