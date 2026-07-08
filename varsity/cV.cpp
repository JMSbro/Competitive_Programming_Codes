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
            if(a == ara[i] )
            {
                ck = true;
            }
        }
        if(!ck) cout << "NO, " << a << " is not a perfect number!" << endl;
        else cout << "YES, " << a << " is a perfect number!" << endl;
    }
    return 0;
}
