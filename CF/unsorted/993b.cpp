#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction()cout << fixed << setprecision()
#define mem(a,b) memset(a,b,sizeof(a))

int main()
{
    optimize();
    int t;
    cin >> t;
    while(t--){
        string a;
        cin >> a;
        reverse(a.begin(), a.end());

        for(int i = 0; i < a.length(); i++){
            if(a[i] == 'p') a[i] = 'q' ;
            else if(a[i] == 'q') a[i] = 'p' ;
            else a[i] = 'w' ;
        }
        cout << a << endl;
    }
    return 0;
}
