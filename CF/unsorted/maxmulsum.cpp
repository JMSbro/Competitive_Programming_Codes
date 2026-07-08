#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        for(int x = 2; x <= n; x++){
               int sum = 0;
            for(int k =1; (k * x) <= n; k++){
               sum += (k * x);
               cout << "sum = " << sum << endl;
            }
        }
    }
    return 0;
}
