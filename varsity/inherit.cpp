#include<iostream>
using namespace std;
class parent
{

protected:
    string p;

};
class child : public parent
{

public:
    string c;
    void setchild(string t, string s)
    {
        c = t;
        p = s;
    }
    void display()
    {
        cout << "the name is: " << c << " " << p << endl;
    }
};
int main()
{
    child chi;
    chi.setchild("Jahin", "Mahruf");
    chi.display();
    return 0;
}
