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
        char c;
        cin >> c;
        int x = c, a = 'a', z = 'z', A = 'A', Z= 'Z', zero = '0', nine = '9';

        if(x >= A && x <= Z) cout << "Uppercase Character" << endl;
        else if( x >= a && x <= z) cout << "Lowercase Character" << endl;
        else if(x >= zero && x <= nine) cout << "Numerical Digit" << endl;
        else cout  <<  "Special Character" << endl;
    }
    return 0;
}

