#include<bits/stdc++.h>
using namespace std;

class add
{
public:
    int sum(int a, int b)
    {
        return a+b;
    }
    int sum(int a, int b, int c)
    {
        return a+b+c;
    }
    double sum(int a, double b){
        return a+b;
    }
};

int main()
{
    add a;
    cout << "Addition of 2 numbers : " << a.sum(2,5) << endl;
    cout << "Addition of 3 numbers : " << a.sum(3,6,7) << endl;
    cout << "Addition of a double and int : " << a.sum(4,3.5) << endl;
    return 0;
}
