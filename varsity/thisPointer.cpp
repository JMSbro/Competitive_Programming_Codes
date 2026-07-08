#include<iostream>

using namespace std;

class animal
{
public:
    virtual void show() { cout << "animal" << endl;}
};

class cat : public animal
{
public:
    void show() { cout << "CAT\n"; }
};

class dog : public animal
{
public:
    void show() { cout << "DOG\n"; }
};

int main()
{
    animal A;
    animal *a;
    cat C;
    dog D;

    A.show();
    C.show();
    D.show();
    cout << endl;
    a = &A;
    a -> show();
    a = &C;
    a -> show();
    a = &D;
    a -> show();


    return 0;
}
