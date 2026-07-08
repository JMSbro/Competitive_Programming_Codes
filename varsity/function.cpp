#include<iostream>
using namespace std;
int sum(int a, int b){
    int c = a + b;
    return c;
}
int sum(int a, int b, int c)
{
    int d = a + b + c;
    return d;
}
double sum(double a, double b)
{
    double c = a + b;
    return c;
}
int main()
{
    cout << sum(3,5) << endl << sum(3,4,5) << endl << sum(2.8,4.2) << endl;
    return 0;
}
