#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {15,2,5,4,23,22};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 1; i < n ; i++){
        int insertidx = i;
        int currentval = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > currentval){
            arr[j+1] = arr[j];
            insertidx = j;
            j--;
        }
        arr[insertidx] = currentval;
    }

    cout << "Sorted array by insertion sort: ";
    for(auto u : arr){
        cout << u << ' ';
    }
    cout << endl;
    return 0;
}