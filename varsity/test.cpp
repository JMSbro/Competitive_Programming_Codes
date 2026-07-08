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
     int a;
     cin >> a;
     int cnt1 = 0, cnt2 = 1;
     for(int i = 1; i <= a; i++){
        if(a % i == 0) cnt1++;
     }
     for(int i = 1; i <= a/2; i++){
        if(a % i == 0) cnt2++;
     }
     cout << cnt1 << endl << cnt2 << endl;
    return 0;
}

