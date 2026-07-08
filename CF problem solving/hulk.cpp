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
    int n;
    cin  >> n;
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0) cout << "I love ";
        else cout << "I hate ";
        if(i != n) cout << "that ";
    }
    cout << "it" << endl;
    return 0;
}

