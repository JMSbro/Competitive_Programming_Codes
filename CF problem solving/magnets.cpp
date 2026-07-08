#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define fraction() cout<<fixed<<setprecision(5);
typedef long long ll;
typedef double dl;

using namespace std;

int main()
{
    optimize();
    int n, p = 0,cnt = 0;
    cin >> n;
    while(n--){
        int  mag;
        cin >> mag;
        if(p != mag) cnt++;
        p = mag;


    }
    cout << cnt << endl;
    return 0;
}

