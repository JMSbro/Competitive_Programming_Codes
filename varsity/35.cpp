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
        int a, b, r, x ,y ;
        cin >> a >> b;
        cin >> r;
        cin >> x >> y;
        a = abs(a);
        b = abs(b);
        x = abs(x);
        y = abs(y);
        double red = (double)r;
        double ans = ceil(sqrt(pow((x-a),2)+ pow((y-b),2)));
        if(ans > red) cout << "The point is not inside the circle" << endl;
        else cout << "The point is inside the circle" << endl;
    }
    return 0;
}
