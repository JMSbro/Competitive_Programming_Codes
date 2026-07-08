#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, cnt = 0;
    cin >> a >> b;
    for(int i = a, j = b; i <= j; i*=3, j*=2){
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
