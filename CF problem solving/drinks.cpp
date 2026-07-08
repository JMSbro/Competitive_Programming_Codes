#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define fraction() cout<<fixed<<setprecision(14)<<
typedef long long ll;
typedef double dl;


int main()
{
    optimize();
    int n;
    dl sum = 0.0;
    cin >> n;

    for(int i = 1; i <= n; i++){
        int a;
        cin >> a;
        sum += (dl)a / 100;
    }
    dl ans = (sum / n) * 100.0;
    fraction() ans << endl;
    return 0;
}

