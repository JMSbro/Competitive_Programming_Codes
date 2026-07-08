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
    cin >> n;
    map<string,int> m;
    for(int i = 0;i < n;i++){
        string s;
        cin >> s;
        m[s]++;
        if(m[s] > 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
