#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define fraction() cout<<fixed<<setprecision(5);
typedef long long ll;
typedef double dl;

using namespace std;
const int mx = 2e5+123;
int a[mx];
int cnt = 1e9, low = 1e9;
void test(int &x, int &y){
    for(int i = x; i <= y; i++){
            if(a[i] == low){
                cnt = low;
                break;
            }
            else if(a[i] < cnt) cnt = a[i];
        }
        cout << cnt << endl;
        cnt = 1e9;
}
int main()
{
    optimize();
    int t, q;

    cin >> t >> q;
    for(int i = 1; i <= t; i++){
        cin >> a[i];
        if(a[i] < low ) low = a[i];
    }

    while(q--){
        int x , y;
        cin >> x >> y;
        test(x,y);
    }

    return 0;
}

