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

    int a[26], pv = 0;
    for(int i = 0;i < 26;  i++){
        char c;
        cin >> c;
        a[i] = c - 'A';
        if(a[i] == 0) pv = i;
    }


    int cnt = 0, j = 1;
    for(int i = 0; i <= 25 && j <= 25; i++){

        if(a[i] == j ) {
            int v = (pv - i);
            if(v >= 0) cnt += v;
            else {
                cnt += (v * -1);
            }
            pv = i;
            j++;
            i = -1;
        }
    }

    cout << cnt << endl;
    return 0;
}

