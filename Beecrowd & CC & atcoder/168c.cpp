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
        int n;
        cin >> n;
        string s, c ;
        int oo = 0, zo = 0;
        cin >> s >> c;
        for(int i = 0; i < n; i++){
            if(s[i] == '1' && c[i] == '1') oo++;
            else if((s[i] == '1' && c[i] == '0') || (s[i] == '0' && c[i] == '1')) zo++;
        }
        if(zo == 0){
            if(oo % 2 == 0) cout << "No" << endl;
            else cout << "Yes" << endl;
        }
        else cout << "Yes" << endl;
        }
    return 0;
}
