#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n , h, cnt = 0;
    cin >> n >> h;
    while(n--){
        int a;
        cin >> a;
        if(a > h) cnt += 2;
        else cnt +=1;
    }
    cout << cnt << endl;
    return 0;
}

