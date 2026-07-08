#include <iostream>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int a = N % 10;
        int b = N/10000;
        int sum = a + b;
        cout << "Sum = " << sum << endl;
    }
    return 0;
}
