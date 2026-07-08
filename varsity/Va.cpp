#include<bits/stdc++.h>

#define endl "\n"
#define fraction() cout<<fixed<<setprecision(5);
typedef long long ll;
typedef double dl;

using namespace std;
class test
{
    int a;
public:
    int b;
    void msg()
    {
        cout << "enter: ";
        cin >> a;
    }
    void show();

};
int main()
{

    test t;
    t.msg();

    t.show();

    t.b = 67;
    cout << t.b << endl;
    cout << endl;
    return 0;
}

void test :: show()
    {
        cout << "show: " << a << endl;
    }

