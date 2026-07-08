#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    int arr[10][10] = {{1,1,1,1,1,1,1,1,1,1},
                       {1,2,2,2,2,2,2,2,2,1},
                       {1,2,3,3,3,3,3,3,2,1},
                       {1,2,3,4,4,4,4,3,2,1},
                       {1,2,3,4,5,5,4,3,2,1},
                       {1,2,3,4,5,5,4,3,2,1},
                       {1,2,3,4,4,4,4,3,2,1},
                       {1,2,3,3,3,3,3,3,2,1},
                       {1,2,2,2,2,2,2,2,2,1},
                       {1,1,1,1,1,1,1,1,1,1}};

    int t;
    cin >> t;

    while (t--) {
        int sum = 0;
        char ar[10][10];


        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin >> ar[i][j];
                if (ar[i][j] == 'X') {
                    sum += arr[i][j];
                }
            }
        }

        cout << sum << endl;
    }

    return 0;
}
