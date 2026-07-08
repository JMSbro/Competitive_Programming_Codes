#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {15,2,5,4,23,22};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n- i -1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    cout << "Sorted array by bubble sort: ";
    for(auto u : arr){
        cout << u << ' ';
    }
    cout << endl;
    return 0;
}