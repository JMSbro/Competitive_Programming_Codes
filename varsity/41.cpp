#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction cout << fixed << setprecision
#define mem(a,b) memset(a,b,sizeof(a))

double fact(int j)
{
    double f = 1.0;
    for(int i = 1; i <= j; i++){
        f *= i;
    }
    return f;
}
int main()
{
    optimize();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        double sum = 0.0;
        for(int i = 1; i <= n; i++){
            sum += (i/fact(i));
        }
        fraction(4) << sum << endl;
    }
    return 0;
}
