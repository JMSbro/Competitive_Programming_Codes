#include<bits/stdc++.h>
using namespace std;

int main(){
    int prv2 = 0, prv1 = 1;
    int newfib;
    cout << prv2 << ' ' << prv1 << ' ';

    for(int i = 0; i < 16; i++){
        newfib = prv2 + prv1;
        cout << newfib << ' ';
        prv2 = prv1;
        prv1 = newfib;
    }
    
    return 0;
}