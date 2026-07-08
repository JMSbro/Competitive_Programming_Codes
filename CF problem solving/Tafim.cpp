#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    long long b;
    cin >> a >> b;
    int arr[a];
    for(int i = 0; i < a; i++){
        cin >> arr[i];
    }
    int cnt_1 = 0;
    for(int j = a - 1; j < a; j++){
        for(int k = 0; k >= 0; k--){
            if(j == (a - k)){
                continue;
            } else{
                if((arr[j] + arr[k]) == b){
                    cnt_1++;
                    cout << j + 1 << " " << a - k + 1;
                    break;
                }
            }
        }
        if(cnt_1 > 0){
            break;
        }
    }
    if(cnt_1 == 0){
        cout << "IMPOSSIBLE";
    }
}