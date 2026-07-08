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
    int l1, l2, r1, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    if(l1 <= l2 && r1 <= r2 && l2 <= r1) cout << l2 << " " << r1 << endl;
    else if(l1 > l2 && r1 > r2 && l1 <= r2) cout << l1 << " " << r2 << endl;
    else if(l1 >= l2 && r1 <= r2) cout << l1 << " " << r1 << endl;
    else if(l1 <= l2 && r1 >= r2) cout << l2 << " " << r2 << endl;
    else if(l1 == l2 && r1 == r2) cout << l2 << " " << r2 << endl;
    else if(l1 == r1 && l1 >= l2 && l1 <= r2) cout << l1 << " " << l2 << endl;
    else if(l2 == r2 && l2 >= l1 && r2 <= r1) cout << l2 << " " << r2  << endl;
    else cout << -1 << endl;
    return 0;
}
