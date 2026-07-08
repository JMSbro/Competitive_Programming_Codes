#include<bits/stdc++.h>
using namespace std;
long fact(int n){
    if( n == 0 ) return 1;
    return ( n * fact(n - 1));
}
int main()
{
    int t;
    cin >> t;
   for(int i = 1; i <= t; i++){
        int n, r , p , q;
        cin >> n >> r >> p >> q;
        long ck = (fact(n)/ (fact(r) * fact(n - r)))  * pow(p,q) ;
        int cnt = 0;
        while(ck % 10 == 0){
           cnt++;
           ck /= 10;
        }
        cout << "Case " << i << cnt << endl;
    }
    return 0;
}

