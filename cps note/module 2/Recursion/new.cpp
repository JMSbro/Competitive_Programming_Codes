#include<bits/stdc++.h>
using namespace std;

long long arr[100005];

long long fib(long long n)
{
    if(n == 0) return 0;
    else if(n == 1) return 1;

    if(arr[n] != -1) return arr[n];
    else {
        arr[n] = fib(n-1) + fib(n-2);
        return arr[n];
    }
}

int main() {
    long long n = 60;
    memset(arr, -1, 100005 * sizeof(long long));
    long long ans = fib(n);
    cout << ans;
}

