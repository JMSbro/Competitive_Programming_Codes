#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define fraction(a) fixed<<setprecision(a)<<
#define mem(a,b) memset(a,b,sizeof(a))
typedef long long ll;
typedef double dl;


int main() {

    optimize() ;

    long long n;
    cin >> n;

    long long sum  = n *(n+1) / 2 ;

    cout << sum <<endl;

     return 0;

 }
