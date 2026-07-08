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
        int m, k;
        string s;
        cin >> m >> k;
        cin >> s;
        int cnts = 0, cntp = 0;
        for(int i = 0; i < m;i++){
            if(s[i] == 'S') cnts++;
            else cntp++;
        }
        if(cnts > k) cout << m << endl;
        else cout << k + abs(cnts - cntp) << endl;
    }
    return 0;
}

