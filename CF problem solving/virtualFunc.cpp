#include<iostream>
using namespace std;
class animal
{
public:
    virtual void show() {cout << "animal\n";}
};
class cat : public animal
{
    public : void show() {cout << "cat\n";}
};
class dog : public animal
{
    public : void show() {cout << "doog\n";}
};

int main()
{
    animal *a, b;
    cat c;
    dog d;
    b.show();
    a = &c;
    a -> show();
    a = &d;
    a -> show();
    return 0;
}
