#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction cout << fixed << setprecision
#define mem(a,b) memset(a,b,sizeof(a))

int main()
{
    optimize();
    string s,t;
    cin >> s >>t ;
    for(int i = 0 ; i  < s.size(); i++){
        s[i] = tolower(s[i]);
        t[i] = tolower(t[i]);
    }
    if(s < t) cout << -1 << endl;
    else if(s > t) cout << 1 << endl;
    else cout << 0 << endl;
    return 0;
}
