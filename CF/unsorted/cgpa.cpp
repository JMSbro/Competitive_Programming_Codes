
//In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;

int main()
{
    double l1s1, l1s2, l2s1, avg;
    cout << "Level-1, Semester-1 result: " ;
    cin >> l1s1 ;
    cout << endl;

    cout << "Level-1, Semester-2 result: " ;
    cin >> l1s2;
    cout << endl;

    cout << "Enter expected Average Result: ";
    cin >> avg;
    cout << endl;

    l2s1 = (avg * 3) - (l1s1 + l1s2);
    cout << "Your Current average is : " << ( (l1s1+ l1s2) /2 ) << endl;
    cout << "You need to attain more than or equal to " << l2s1;
    cout << " to have average of " << avg << " mark." << endl;
    return 0;
}
