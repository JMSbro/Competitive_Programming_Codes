#include<bits/stdc++.h>
using namespace std;
class sum
{
    int a, b, add;
public:
    sum();
    void display();
    sum(int x, int y);
    ~sum();
};
sum :: sum()
{
    cout << "Addition : ";
}
void sum :: display()
{
    cout << add << endl;
}
sum :: sum(int x, int y)
{
    a = x; b = y;
    add = a + b;
}
sum :: ~sum()
{
    cout << "Finished" << endl;
}

int main()
{
    int x,y;
    cout << "Enter 1st number: ";
    cin >> x;
    cout << "Enter 2nd number: ";
    cin >> y;
    sum s1 = sum();
    sum s2(x,y);
    s2.display();
    return 0;
}

