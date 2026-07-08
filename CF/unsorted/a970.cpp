#include<iostream>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--){
        int a,b;
        cin >> a >> b;
        if(a % 2 == 0){
           if(b % 2 == 0) cout << "yes" << endl;
           else {
            if(a == 0) cout << "no" << endl;
            else cout << "yes" << endl ;
            }
        }
        else cout << "no" << endl;
    }
    return 0;
}
