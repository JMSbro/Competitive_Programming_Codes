#include <iostream>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        long long N;
        cin >> N;
        if( N % 2 == 0){
            cout << "even" << "\n";
        }
        else cout << "odd" << "\n";
    }
    return 0;
}
