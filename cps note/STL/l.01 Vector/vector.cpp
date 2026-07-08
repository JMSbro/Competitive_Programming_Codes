#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction()cout << fixed << setprecision()
#define mem(a,b) memset(a,b,sizeof(a))
vector<int> b;
int main()
{
    optimize();
    vector<int> v = {2,3};
    int a , n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        v.push_back(a);
        b.push_back(a);
    }
    int s = v.size();
    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    cout << endl;
    vector<int> c = {3,4,6,1,2,8,9};
    v = c;
    for(auto u : c) cout << u << " ";
    cout << endl;
    //c.clear();
    cout << c.empty() << endl;
    cout << v.empty() << endl;

    v.resize(10);
    for(auto u : v) cout << u << " ";
    cout << endl;
    cout << v.size() << endl;

    vector<int>::iterator i;
    for(i = c.begin(); i != c.end(); i++) cout << *i << " ";
    cout << endl;

    sort(c.begin(), c.end());
    for(auto u : c) cout << u << " ";
    cout << endl;

    sort(c.rbegin(),c.rend());
    for(auto u : c) cout << u << " ";
    cout << endl;

    sort(c.begin(), c.end(), greater<int>());
    for(auto u : c) cout << u << " ";
    cout << endl;

    reverse(c.begin(), c.end());
    for(auto u : c) cout << u << " ";
    cout << endl;

    sort(v.begin()+2, v.begin()+5);
    for(auto u : v) cout << u << " ";
    cout << endl;

    cout<< c.back()  << endl;
    c.pop_back();
    cout << c.back() << endl;
    cout << *c.begin() << endl;

    b.resize(5);
    for(auto u : b) cout << u << " ";
    cout << endl;
    cout << *(b.end() - 4) << endl;

    vector<int> my = {3,123,456,677,34,43};
    my.erase(my.begin());
    for(auto u : my) cout << u << " ";
    cout << endl;
    my.erase(my.begin() + 2);
    for(auto u : my ) cout<< u << " ";
    cout << endl;

    my = {1,1,2,2,3,3,4,4};
    unique(my.begin(), my.end());
    int tmp = unique(my.begin(),my.end()) - my.begin();
    cout << tmp << endl;
    for(int i = 0; i < tmp; i++){
        cout << my[i] << " ";
    }
    cout << endl;


    return 0;
}
