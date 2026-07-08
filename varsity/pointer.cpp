#include<iostream>
using namespace std;

class point
{
    int x,y;
public:
    void set (int x, int y)
    {
        this->x = x; this->y = y;
    }
    void show()
    {
        cout << x << endl << y << endl;
    }
};

int main()
{
    point d; //d dewar karon hoilo point class er object p nisilam, abar niche int e **p nisi... same howa jabe na.
    d.set(10,20);
    d.show();

    int a = 5 , *ptr, b, **p;
    ptr = &a;
    b = *ptr + 2;
    p = &ptr;

    cout << a << endl << ptr << endl  << b << endl << *ptr << endl << p << endl << *p << endl << **p;

    return 0;
}
