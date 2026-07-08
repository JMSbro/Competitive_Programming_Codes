
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

/// no debugger for stack , queue and priority queue. also no iterator for them
/// comment cin >> t for single test case
struct info{
    string name;
    int roll;

    void input(){
        cin >> name;
        cin >> roll;
    }

    void output(){
        cout << name << endl;
        cout << roll << endl;
    }
};

bool cmp(info &x, info &y){
    if(x.roll < y.roll) return true;
    else return false;
}

void solve(){
    info st;
    st.name = "jms";
    st.roll = 1;

    cin >> st.name ;
    cin >> st.roll;

    cout << st.name << ' ' << st.roll << endl;

    vector<info> stu(2);
    for(int i = 0; i < 2; i++){
        stu[i].input(); //not recommended to use for each auto, as auto can not recognize 
        //custom variable, where struct is a kind of custom variable
    }
    // for(int i= 0; i < 2; i++){
    //     stu[i].output();
    // }
    for(auto u: stu){
        u.output();
    }

    if(cmp(stu[0], stu[1]) == true){
        cout << "first" << endl;
    }
    else cout << "second" << endl;
}

int main()
{
    optimize();
    int t = 1;
    // cin >> t;
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
