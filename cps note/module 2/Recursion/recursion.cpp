#include<bits/stdc++.h>
using namespace std;

/* int fact(int n)
{
    if(n == 1) return 1;
    return n * fact(n-1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cout << fact(n) << endl;

    return 0;
} */

int fib(int n)
{
   // if(n == 0) return 0;
    // if(n == 1) return 1;
    if(n <= 1) return n;

    return fib(n-1) + fib(n-2);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cout << fib(n) << endl;

    return 0;
}
