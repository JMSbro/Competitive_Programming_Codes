#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a >> b;
        int mini = 100,d,c[10] = {1,2,3,4,5,6,7,8,9,10};

        for(int i= 0; i < 10; i++){
            d = (c[i] - a) + (b - c[i]);
            if(d >= 0 && d < mini){
                mini = d;
            }
        }
        cout << mini << endl;
    }

    return 0;
}
