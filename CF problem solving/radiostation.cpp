#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n)
#define mem(a,b) memset(a,b,sizeof(a))
#define pb push_back()

int main()
{
    optimize();
    int n, m;
    cin >> n >> m;
    map<string,string> mp;
    for(int i = 0; i < n; i++){
        string s1, s2;
        cin >> s1 >> s2;
        mp[s2] = s1;
    }
    for(int i = 0; i < m; i++){
        string s1, s2, s3 = "; #";
        cin >> s1 >> s2;
        s2.pop_back();
        cout << s1 << ' ' << s2<< s3 << mp[s2] << endl;
    }
    return 0;
}
