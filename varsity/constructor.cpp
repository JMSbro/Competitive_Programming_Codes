#include<iostream>
#include<string>
using namespace std;
class student
{
    string name;
    int sid;
    double cgpa;
public:
       string dept_name;
       student(string s, string t)
       {
           name = s;
           dept_name = t;
           cout << endl <<  "Enter student id: ";
           cin >> sid;
           cout << endl << "Enter cgpa: ";
           cin >> cgpa;
       }


       ~student()
       {
           cout << "Finished."<< endl;
        }

};
int main()
{


    string s,t;
    cout << "Enter your name: ";
    getline(cin,s);
    cout << endl << "Enter department: ";
    getline(cin,t);
    student(s,t);



    return 0;
}
