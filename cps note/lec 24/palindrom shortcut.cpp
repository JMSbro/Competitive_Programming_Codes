#include<iostream>
using namespace std;

const int mx = 1123;
char a[mx];

int main()
{

    scanf("%s", a);
    int len = 0;
    while( a[len] != 0){
        len++;
    }

    bool iseq = true;
    for ( int i = 0,j = len-1; i < j; i++ , j--){
       if(a[i] != a[j]) iseq = false;
    }

    (iseq) ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}
