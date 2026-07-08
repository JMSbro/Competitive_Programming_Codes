#include<iostream>
using namespace std;
const int mx = 1e5;
int a[mx];
int main(){
    int t;
    cin >> t;
    while(t--){
        int l , r;
        cin >> l >> r;

        a[0] = l;
        int sum = 1;
        int n = 0;
        for(int i = 1; a[i-1] <= r; i++){
            a[i] = a[i-1] + sum;
            sum++;
            n++;
        }
        cout << n << endl;
    }

    return 0;
}
