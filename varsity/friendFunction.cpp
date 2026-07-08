#include <iostream>
using namespace std;
class sample
{
    int a , b;
public:
    void setvalue() {a = 5; b = 5;}
    friend int sum(sample s);
};
int sum(sample s)
    {
        return int (s.a + s.b);
    }
int main()
{
    sample s;
    s.setvalue();
    cout << "the sum is : " << sum(s) << endl;

    return 0;
}
