#include<bits/stdc++.h>
using namespace std;

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

int32_t main() {
    cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
    int tc;
    cin >> tc;
    while(tc--) {
        int n, x;
        string s;
        cin >> n >> x >> s;
        if(x==1 || x==n) {
            cout << "1\n";
            continue;
        }
        x--;
        int inf = 1e9;
        int lf=-inf, rg=inf;
        
        for(int i=x-1; i>=0; i--)
            if(s[i]=='#') {
                lf=i;
                break;
            }
        for(int i=x+1; i<n; i++)
            if(s[i]=='#') {
                rg=i;
                break;
            }
        // cout << lf << ' '<< rg << endl;
        if(lf==-inf && rg==inf) {
            cout << "1\n";
            continue;
        }
        cout << max(min(x+1, n-rg+1), min(lf+2, n-x)) << '\n';
        // cout << min(lf+2, n-x) << endl;
    }
    return 0;
}