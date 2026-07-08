#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define fraction() cout<<fixed<<setprecision(5);
typedef long long ll;
typedef double dl;
int a[60];
using namespace std;


int main()
{
    optimize();
    int t;
    cin >> t;
    while(t--){
    int n,k;
    cin >> n >> k;
    int robin = 0;
    int cnt = 0;
    for(int i = 1;i <= n; i++){
        cin >> a[i];
        if(a[i] >= k) robin += a[i];
        else if(a[i] == 0 && robin > 0){
            robin--;
            cnt++;
            }
        }


    cout << cnt << endl;
    }
    return 0;
}

