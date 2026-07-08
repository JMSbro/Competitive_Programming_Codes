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
	    ll a, b ,c;
	    cin >> a >> b >> c;
	    int add;
	    if(c >= a) add = c;
	    else add = c * ((a/c) + (a%c));
	    while(add <= b){

            cout << add << endl;
	        add += c;
        }
        cout << endl;
	}
    return 0;
}
