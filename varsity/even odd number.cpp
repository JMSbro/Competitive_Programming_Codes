#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    if(n == 0){
        cout << "NULL" << endl;
    }

    else if(n % 2 == 0) cout << "EVEN NUMBER" << endl;

    else cout << "ODD NUMBER" << endl;

    return 0;
}
