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
        reverse(s.begin(),s.end());

        int ind, zr = 0;

        for(int i = 0; i < s.size(); i++){

            if(s[i] != '0'){
                ind = i;
                break;
            }
            else zr = i;
        }

        if(zr == (s.size() - 1)) {
            cout << 0 << endl;
            continue;
        }
        for(int i = ind; i < s.size(); i++){
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}
