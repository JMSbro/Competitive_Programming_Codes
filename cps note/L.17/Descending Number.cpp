#include <iostream>
using namespace std;
int main(){
for(int i = 1000; i >= 1; i--){
    if(i % 5 == 0 && i != 1000){
        cout << endl << i << " ";
    }
    else if(i == 1000){
        cout << i << " ";
    }
    else {
        cout << i << " ";
    }
    }
    return 0;
}
