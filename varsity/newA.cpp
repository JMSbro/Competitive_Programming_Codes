#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    bool chk = true;
    if(n % 8 == 0 && n > 0) cout << "YES" << endl << n << endl;
    else if(n > 0 && n % 8 != 0) {
        long long x = n;
        int cnt = 0;
        while(x > 0){
            x /= 10;
            cnt++;
        }
        long long int num = 0, mod = 0;
        for(long long i = 1; i <= cnt; i++){
            num = n / pow(10,i);
            int c = pow(10,i -1);
            mod = n % c;
            num *= pow(10,i -1);
            num += mod;

            if(num % 8 == 0 && num >= 0) {
                cout << "YES" << endl << num << endl;
                chk = false;
                break;
            }
        }
    }
    if(chk) cout << "NO" << endl;
    return 0;
}

