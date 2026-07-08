#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class student
{
    string name;
    int sid,session,semester,level;
    double cgpa;
public:
    void getinfo();
    void displayinfo();

};

void student :: getinfo()
{

    cout << "Enter name : ";
    getline(cin,name);

    cout << "Enter student id : ";
    cin >> sid;

    cout << "Enter cgpa : ";
    cin >> cgpa;

    cout << "Enter session : ";
    cin >> session;

    cout << "Enter semester : ";
    cin >> semester;

    cout << "Enter level : ";
    cin>> level;
    cout << endl;
}

void student :: displayinfo()
{
    cout << "Name : " << name << endl << "Student ID : " << sid << endl;
    cout << "CGPA : " << cgpa << endl << "Session : " << session << endl;
    cout << "Semester : " << semester << endl;
}

int main()
{
    student stdinfo;
    stdinfo.getinfo();
    stdinfo.displayinfo();

    return 0;


}
