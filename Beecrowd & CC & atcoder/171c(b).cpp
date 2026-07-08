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
        string s, m = "ADVITIYA";
        cin >> s;
        int cnt = 0;
        for(int i = 0; i < 8;i++){

            while(1){
                    if(s[i] == m[i]) break;
                    if(s[i] == 'Z') s[i] = 'A';
                    else {
                        int a = s[i]- 'A';
                        a++;
                        s[i] = a+'A';
                    }
                    cnt++;
                }


        }
        cout << cnt << endl;
    }
    return 0;
}

