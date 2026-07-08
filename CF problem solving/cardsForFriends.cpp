#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int w, h , n, cnt = 1;
        cin >> w >> h >> n;

        if(w % 2 != 0 && h % 2 != 0){
            if(n == 1) cout << "yes" << endl;
            else cout << "NO" << endl;
        }
        else {
            if(w % 2 == 0){
                for(int i = w;i > 0;){
                    if(i % 2 == 0) cnt *= 2;
                    if((i / 2.0) > double(i / 2)) break;
                    else i /= 2;
                }
            }
            if(h % 2 == 0){
                for(int i = h;i > 0;){
                    if(i % 2 == 0) cnt *= 2;
                    if((i / 2.0) > double(i / 2)) break;
                    else i /= 2;
                }
            }
            if(cnt >= n) cout << "yes" << endl;
            else cout << "no" << endl;
        }

    }
    return 0;
}
