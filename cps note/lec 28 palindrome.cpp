#include<bits/stdc++.h>
using namespace std;
const int mx = 1e5+123;
char s[mx];

void swap(char &a, char &b)
{
    char t = a;
    a = b;
    b = t;
}

void rev(int n, char a[])
{
    for(int i = 0, j = n - 1; i < j; i++, j--){
        swap(a[i],a[j]);
    }
}

bool ispal(int &n,char s[])
{
    char tmp[mx];
    for(int i = 0; i < n; i++){
        tmp[i] = s[i];
    }
    rev(n,s); ///ekhane muloto n er address takei may be pathano hosse tai rev() e n er age & dite hosse na.
    for(int i = 0; i < n ; i++){
        if(tmp[i] != s[i]) return 0;
        else return 1;
    }
}
int main()
{
    scanf(" %s", s);
    int n = strlen(s);
    (ispal(n,s)) ? cout << "yes" << endl : cout << "NO" << endl;
    cout << s << endl;
    cout << n << endl;
    return 0;
}
