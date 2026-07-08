// In the Name of Allah

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> v(n);
        int cnt = 0;

        for(int i = 0 ; i < n ; i++){
            cin >> v[i];
            if(v[i]==1){
                cnt++;
            }
        }

        if(cnt==n){
            cout <<"YES"<<endl;
            continue;
        }

        bool ck = false;
        int indx = -1;

        for(int i = 0 ; i < n-1 ; i++){
            if(v[i]==0 && v[i+1]==0){
                ck = true;
                break;
            }
        }

        if(ck){
            cout <<"YES"<<endl;
            
        }else{
            cout <<"NO" << endl;
        }

        






    }

    
 
    

    return 0;
}