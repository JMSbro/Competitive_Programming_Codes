#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {15,2,5,4,23,22};
    int size = sizeof(arr) / sizeof(arr[0]);
    int minval = arr[0];
    for(int i = 0; i < size; i++){
        if(arr[i] < minval){
            minval = arr[i];
        }
    }
    cout << "The minimum value: " << minval << endl;
    
    return 0;
}