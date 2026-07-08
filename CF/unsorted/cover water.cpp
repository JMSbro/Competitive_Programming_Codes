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
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool ck = false;
        int cnt = 0;
        for(int i = 0, j = 2; i < n; i++){
            if(s[i] == '.') cnt++;
            if(i >= 1 && i <= n-2){
                if(s[i]== '.' && s[i-1] == '.' && s[i+1] == '.'){
                    ck = true;
                    break;
                }
            }
        }
        if(ck) cout << 2 << endl;
        else cout << cnt << endl;
    }
    return 0;
}

