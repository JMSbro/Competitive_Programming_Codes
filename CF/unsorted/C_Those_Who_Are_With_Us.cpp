
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

bool chk(vector<pair<int,int>> id,int r,int c){
    for(int i = 0; i < id.size(); i++){
        if(id[i].f != r && id[i].s != c) return false;
    }
    return true;
}

void solve(){
    int n, m;
    cin >> n >> m;
    vvi v(n,vector<int>(m));
    // dbg(v);

    int mx = INT_MIN;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> v[i][j];
            mx = max(mx, v[i][j]);
        }
    }

    vector<pair<int, int>> id;
     for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(v[i][j] == mx ) {
               id.pb(make_pair(i,j));
            }
        }
    }

    if(id.size() == 1) {
        cout << mx - 1 << endl;
        return;
    }

    // bool flag = true;
    if(id[0].first == id[1].first){        
        bool flag = true;
        int r = id[0].first, c = -1;
        for(int i = 0; i < id.size(); i++){
            if(r != id[i].f){
                if(c == -1) {
                c = id[i].second;
                continue;
                }
                if(id[i].second != c){
                flag = false;
                break;
                }
            }
        } 
        if(flag) {
        cout << mx - 1 << endl;
        return;
        }
    }
    // if(flag) {
    //     cout << mx - 1 << endl;
    //     return;
    // }

    // bool fla = true;
    if(id[0].s == id[1].s){   
        bool flag = true;     
        int c = id[0].s, r = -1;
        for(int i = 0; i < id.size(); i++){
            if(c != id[i].s){
                if(r == -1) {
                r = id[i].f;
                continue;
                }
                if(id[i].f != r){
                flag = false;
                break;
                }
            }
        } 
        if(flag) {
        cout << mx - 1 << endl;
        return;
        }
    }
    // if(fla) {
    //     cout << mx - 1 << endl;
    //     return;
    // }

    
    if(chk(id, id[0].f, id[1].s) || chk(id, id[1].f, id[0].s)) {
        cout << mx - 1 << endl;
        return;
    }

    cout << mx << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while(t--){
        solve();
    } 
    return 0;
}
