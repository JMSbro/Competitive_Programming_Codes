#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define fraction() cout<<fixed<<setprecision(5);
typedef long long ll;
typedef double dl;


int main()
{
    optimize();
    ll n;
    cin >> n;
    if(n % 2 == 0) cout << n / 2 << endl;
    else {

        cout <<  ((ll) ceil((dl)n / 2)) * -1<< endl;
    }

    return 0;
}

