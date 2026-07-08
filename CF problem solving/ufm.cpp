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
    string a, b;
    cin>> a >> b;
    for(int i = 0; i < a.length(); i++){
        (a[i] == b[i]) ? cout << 0 : cout << 1;
    }
    cout << endl;
    return 0;
}

