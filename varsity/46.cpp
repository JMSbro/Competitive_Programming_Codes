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
        int a, b, c;
        cin >> a >> b >> c;
        double s = (a + b + c) / 2.0;
        double i = s* (s - a) * (s - b) * (s - c);
        double ans = sqrt(i);
        fraction(3) << "Area = " <<  ans << endl;
    }
    return 0;
}
