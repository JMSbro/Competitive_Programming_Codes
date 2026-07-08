#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    // for(int i = 0; i < n; i++){
    //     cout << arr[i] << " ";
    // } cout << endl;
    int ans = arr[0];
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == ans || arr[i] == (ans + 1)){
            ans = arr[i];
        } else{
            cout << ans + 1;
            cnt++;
            break;
        }
    }
    if(cnt == 0){
        cout << 0;
    }
}