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
    int n, turn = 1, sr = 0, dm = 0;
    vector<int> v;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    while(1){
        if(v.size() == 0) break;
        if(turn == 1){
            if(*v.begin() > v.back()){
                sr += *v.begin();
                v.erase(v.begin());
                turn = 2;
            }
            else {
                sr += v.back();
                v.pop_back();
                turn = 2;
            }
        }
        else {
            if(*v.begin() > v.back()){
                dm += *v.begin();
                v.erase(v.begin());
                turn = 1;
            }
            else {
                dm += v.back();
                v.pop_back();
                turn = 1;
            }
        }

    }
         cout << sr << " " << dm << endl;
    return 0;
}
