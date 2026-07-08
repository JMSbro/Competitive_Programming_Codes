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
     int a, b;
    cin >> a >> b;
    if(a < b) swap(a,b);
    if(a % b == 0) cout << "Multiples" << endl;
    else cout << "No Multiples" << endl;
    return 0;
}
