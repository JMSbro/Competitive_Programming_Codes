#include<iostream>
using namespace std;
class test
{
    int a;
public:
    void setval()
    {
        cout << "Enter a value: ";
        cin >> a;
    }
    void display();
};
void test :: display()
{
    cout << "Your entered value is: " << a << endl;
}
int main()
{
    test t;
    t.setval();
    t.display();
    return 0;
}
