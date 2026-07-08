#include<iostream>
#include<math.h>

using namespace std;

int main()
{
   long long n, m, a;
   cin >> n >> m >> a;

   long long x = ((m+a-1)/a)*((n+a-1)/a);
    // double y = 2/7;
    //ceil(2/7);
    //cout << ceil(2/7) << endl;
   // ceil() only works for a number, not for a variable or a mathematical operation.
   cout << x << endl;

    return 0;
}
