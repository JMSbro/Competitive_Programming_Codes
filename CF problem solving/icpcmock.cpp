#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define fraction(a) fixed<<setprecision(a)<<
#define mem(a,b) memset(a,b,sizeof(a))
typedef long long ll;
typedef double dl;


int main()
{
    optimize();
    int t;


    cin >> t;
    for(int i = 1; i <= t; i++){
        int a, b ,c;
        cin >> a >> b >> c;
        if(a == 6){
            if((b == 3 && c == 0) || (b == 0 && c == 3) || (b == 1 && c == 1)) cout << "Case " << i << ": " << "perfectus" << endl;
            else cout << "Case " << i << ": " << "invalidum" << endl;
        }
        else if(b == 6){
            if((a == 3 && c == 0) || (a == 0 && c == 3) || (a == 1 && c == 1)) cout << "Case " << i << ": " << "perfectus" << endl;
            else cout << "Case " << i << ": " << "invalidum" << endl;
        }
        else if(c == 6){
            if((b == 3 && a == 0) || (b == 0 && a == 3) || (b == 1 && a == 1)) cout << "Case " << i << ": " << "perfectus" << endl;
            else cout << "Case " << i << ": " << "invalidum" << endl;
        }
        else if((a == 3 && b == 3 && c == 3) || (a == 2 && b == 2 && c == 2)) cout << "Case " << i << ": " << "perfectus" << endl;
        else cout << "Case " << i << ": " << "invalidum" << endl;
    }
    return 0;
}

