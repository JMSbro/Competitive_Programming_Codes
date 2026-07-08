#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
    int x[1010],y[1010];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x[i] >> y[i];
    }
    int  X, Y;
    double bigans = 0.0, root;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            X = x[i] - x[j];
            Y = y[i] - y[j];
            root = sqrt((X*X) + (Y*Y));
            if(bigans < root) bigans = root;
        }
    }
    cout << fixed << setprecision(10) << bigans << endl;
    return 0;
}
