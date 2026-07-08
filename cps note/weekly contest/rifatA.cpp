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
        int cont = 0, mxfr = 0, pairs = 0;
        for(int i= 1; i <= n; i++){
            cin >> a[i];
        }

        for

        for(int i = 1; i <= 100; i++){
            if(b[i] > mxfr ) mxfr = b[i];
            if(b[i] > 1) pairs += (b[i] * (b[i] - 1)) / 2;
        }

        pairs += (cont * mxfr) + (cont * (cont - 1)) / 2;

        cout << pairs << endl;
    }
    return 0;
}
