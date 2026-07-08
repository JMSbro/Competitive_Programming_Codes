#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction()cout << fixed << setprecision()
#define mem(a,b) memset(a,b,sizeof(a))
int mp[150];
int main()
{
    optimize();
    int n;
    string s;
    bool ck = true;
    cin >> s;

    int sa = s.size();
    if(sa % 2 != 0) {
        cout << "No" << endl;
        ck = false;
    }
    else{
        for(int i = 0; i<n; i++){
            mp[s[i]]++;
        }
        for(int i = 97; i <= 122; i++){
                cout << mp[i] << endl;
            if(mp[i] != 0 && mp[i] != 2) {
                cout << "No1" << endl;
                ck = false;
                break;
            }
        }
        if(ck){
            for(int i = 1; i < n; i+=2){
                if(s[i] != s[i-1]) {
                    cout << "No2" << endl;
                    ck = false;
                    break;
                }
            }
        }
    }
     if(ck) cout << "Yes" << endl;
    return 0;
}
