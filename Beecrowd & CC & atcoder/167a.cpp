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
    cin >>  t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        int sa = s.size();

        for(int i = (s.size() - 1); i >= 0 ; ){
            if(s.size() == 1 || i == 0) break;
            else {
                if(s[i] != s[i-1]) {
                    s.pop_back();
                    i = s.size();
                }
                else i--;
            }

        }

        cout << s.size() << endl;
    }

    return 0;
}

