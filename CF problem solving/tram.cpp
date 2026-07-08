#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0, tck = 0;
    cin >> n;
    while(n--){
        int a, b;
        cin >> a >> b;
        cnt -= a;
        cnt += b;
        if(cnt > tck) tck = cnt;
    }
    cout << tck << endl;
    return 0;
}

