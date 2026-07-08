#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {15,2,5,4,23,22};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    int targetval = 4;
    int idx = -1;
    
    int left = 0, right = n - 1;
    while(left <= right){
        int mid = (left+right)/2;

        if(arr[mid] == targetval){
            idx = mid;
            break;
        }
        if(arr[mid] > targetval){
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
    if(idx == -1){
        cout << "Target value " << targetval << " not found.";
    }
    else{
        cout << "Index of the " << targetval << " is " << idx << ".\n";
    }

    
    return 0;
}