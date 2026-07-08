#include<iostream>
using namespace std;

class employee{
    int salary;
public:
    void setsalary(int s) {salary = s;}
    int getsalary() {return salary;}
};

int main()
{
    employee rony;
    rony.setsalary(50000);

    cout << "Salary of rony is : " << rony.getsalary() << endl;
    return 0;
}
