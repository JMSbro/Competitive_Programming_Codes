#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {15,2,5,4,23,22};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < n - 1; i++){
        int minidx = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[minidx]){
                minidx = j;
            }
        }
        swap(arr[minidx], arr[i]);
    }

    cout << "Sorted array by selection sort: ";
    for(auto u : arr){
        cout << u << ' ';
    }
    cout << endl;
    return 0;
}