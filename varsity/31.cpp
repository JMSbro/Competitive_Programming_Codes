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
    int arr[8] = {2,3,5,7,13,17,19,31};
    unsigned long long ara[8];
    for(int i = 0; i < 8; i++){
        ara[i] = (pow(2,(arr[i] - 1))) * (pow(2,arr[i])-1);
    }
    cin >> t;
    while(t--){
        unsigned long long a;
        bool ck = false;
        cin >> a;
        for(int i = 0; i < 8; i++){
            if(ara[i] <= a )
            {
                cout << ara[i] << endl;
            }
        }
        cout << endl;
    }
    return 0;
}
