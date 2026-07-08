#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n; 
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int total_1 = 0, total_2 = 0;
    int x = n/4;
    int y = n/2;
    for(int i = 0; i < x; i++){
        total_1 = arr[i] + arr[n - i - 1];
    }
    for(int j = x; j < y; j++){
        total_2 = arr[j] + arr[n - j - 1];
    }
    if(n%2 != 0){
        total_2+= arr[y + 1];
    }
    cout << max(total_1, total_2) - min(total_1, total_2);
    
}