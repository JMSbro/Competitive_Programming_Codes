#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int y;
    bool chk = true;
    for(int i = n + 1; ; i++){
        y = i;
        int x = i;
        int a[10];
        for(int i = 1; i <= 4; i++){
            a[i] =  x % 10;
            x /= 10;
        }
        int cnt = 0;
        for(int i = 1; i <= 4; i++){
            for(int j = i + 1; j <= 4; j++){
                if(a[i] == a[j]) cnt++;
            }
        }
        if(cnt > 0) chk = false;
        else chk = true;
        if(chk) {
            break;
        }
    }
    cout << y << endl;
    return 0;
}

