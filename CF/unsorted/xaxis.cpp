#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--){
        int n1,n2,n3;
        cin >> n1 >> n2 >> n3;
        int s1 = n1 - n1;
        int s2 = n1 - n2;
        int s3 = n1 - n3;
        int d1 = abs(s1) + abs(s2) + abs(s3);

        int s4 = n2 -n1;
        int s5 = n2 - n2;
        int s6 = n2-n3;
        int d2= abs(s4) + abs(s5) + abs(s6);

         int s7 = n3 -n1;
        int s8 = n3 - n2;
        int s9 = n3-n3;
        int d3= abs(s7) + abs(s8) + abs(s9);

        if(d1 <= d2 && d1 <= d3){
            cout << d1 << endl;
        }
        else if(d2 <= d1 && d2 <= d3){
            cout << d2 << endl;
        }
         else if(d3 <= d1 && d3 <= d2){
            cout << d3 << endl;
        }
    }
    return 0;
}
