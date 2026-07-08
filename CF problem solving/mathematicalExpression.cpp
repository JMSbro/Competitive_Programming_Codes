#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction cout << fixed << setprecision
#define mem(a,b) memset(a,b,sizeof(a))
#define pb push_back()

int main()
{
    optimize();
    int a, b, c;
    char x, y;
    cin >> a >> x >> b >> y >> c;
    if(x == '+'){
        if(a + b == c) cout << "Yes" << endl;
        else cout << a + b << endl;
    }
    else if(x == '-') {
        if(a - b == c) cout << "Yes" << endl;
        else cout << a - b << endl;
    }
    else {
        if(a * b == c) cout << "Yes" << endl;
        else cout << a * b << endl;
    }
    return 0;
}
