#include<iostream>
using namespace std;
int a[110], b[110];
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        for(int i= 1; i <= n; i++){
            cin >> a[i];
        }
        for(int i = 1; i<=n; i++){
            b[a[i]]++;
        }
        int high = 0, save = 0;
        for(int i = 1; i <= 100; i++){
            if(b[i] > save) {
                    high = i;
                    save = b[i];
            }
        }
        for(int i = 1; i <= n; i++){
            if(a[i] == 0) a[i] = high;
        }
        int cnt = 0;
        for(int i = 1; i <= n; i++){
            for(int j = i + 1; j <= n; j++){
                if(a[i] == a[j]) cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
