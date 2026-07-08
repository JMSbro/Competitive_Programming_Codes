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
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int si = s.size();
        for(int i = 0; i < si; i++){
            if(s[i] == 'L') s[i] = s[i-1];
            else if(s[i] == 'R') s[i] = s[i+1];
        }
        cout << s << endl;
    }
    return 0;
}
