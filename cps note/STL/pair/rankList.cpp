#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction cout << fixed << setprecision
#define mem(a,b) memset(a,b,sizeof(a))
#define pb push_back()
bool cmp(const pair<int,int> &p1, const pair<int,int> &p2)
{
    if(p1.first > p2.first) return true;
    else if(p1.first == p2.first) return (p1.second < p2.second);
    else return false;
}
int main()
{
    optimize();
    int n, k;
    cin >> n >>k;
    vector<pair<int,int>> v(n + 1);
    for(int i = 1;i <= n; i++){
        cin >> v[i].first >> v[i].second;
    }
    int cnt = 0;
    sort(v.begin(),v.end(),cmp);
    for(auto u:v ){
        if(u == v[k-1]) cnt++;
    }
    cout << cnt << endl;

    return 0;
}
