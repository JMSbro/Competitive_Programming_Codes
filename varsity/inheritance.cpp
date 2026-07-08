#include<bits/stdc++.h>
using namespace std;


class parent
{
protected:
    string name;
};
class child : public parent
{
    string surname;
public :
    void setname(string first, string last)
    {
    name = first; surname = last;
    }
    void fullname()
    {
        cout << "Full name: " << name << " " << surname;
    }
};

int main()
{

    parent p;
    child c;
    c.setname("Leo ", "Messi");
    c.fullname();

    return 0;
}
