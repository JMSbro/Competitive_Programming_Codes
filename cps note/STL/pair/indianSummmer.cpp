#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction cout << fixed << setprecision
#define mem(a,b) memset(a,b,sizeof(a))
#define pb push_back()

int main()
{
    optimize();
    int n;
    cin >>n ;
    vector<pair<string,string>> v(n);
    for(int i = 0;i < n; i++) cin >> v[i].first >> v[i].second;
    sort(v.begin(),v.end());
    int s = unique(v.begin(),v.end()) - v.begin();
    cout << s << endl;
    return 0;
}
