#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {15,2,5,4,23,22};
    int n = sizeof(arr) / sizeof(arr[0]);
    int targetval = 47;
    int idx = -1;
    for(int i = 0 ; i < n; i++){
        if(arr[i] == targetval) idx = i;
    }

    if(idx == -1){
        cout << "Target value " << targetval << " not found.";
    }
    else{
        cout << "Index of the " << targetval << " is " << idx << ".\n";
    }

    
    return 0;
}