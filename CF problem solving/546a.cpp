#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int cnt = 0;
    for(int i = 1; i <= w; i++){
        cnt += i;
    }
    int total = k * cnt;
    if(n >= total) cout << 0 << endl;
    else cout << total - n << endl;

    return 0;
}
