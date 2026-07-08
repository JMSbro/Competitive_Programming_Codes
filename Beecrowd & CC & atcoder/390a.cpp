#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction cout << fixed << setprecision
#define mem(a,b) memset(a,b,sizeof(a))
#define pb push_back()

int main()
{
    optimize();
    int a = 1, i1 = 0, i2 = 0;

    int ck = 0;
    for(int i = 0; i < 5; i++){
            int b ;
        cin >> b;
        if(a != b) {
            ck++;
            if(ck == 1) i1 = i + 1;
            else if(ck == 2) i2 = i + 1;
        }
        a++;
    }
    if(ck == 0 || ck > 2) cout << "No" << endl;
    else {
        if(i1 == (i2 - 1)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
