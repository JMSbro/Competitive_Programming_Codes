#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define fraction(a) fixed<<setprecision(a)
#define mem(a,b) memset(a,b,sizeof(a))
typedef long long ll;
typedef double dl;

void printarr(int a[], int len)
{
    for(int i = 0; i < len; i++) {
            cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    optimize();
    int a, b;
    cin >> a >> b;
    swap(a,b);
    cout << a << endl << b << endl;
    cout << "max : " <<  max(a,b) << endl << "min : " << min(a,b) << endl;
    cout << "square root of a : " << sqrt(a) << endl;
    cout << "cubic root of a : " << cbrt(a)<< endl;
    cout << "ceil : " << ceil(3.456) << endl << "floor : " << floor(3.456) << endl << "round : " << round(3.456) << " and "<< round(3.556) << endl;
    cout << "max of a list of numbers : " << max({2,1,4,3,11,2,5,32}) << endl << "min if a list of some numbers : " << min({2,1,4,3,11,2,5,32}) << endl;
    dl x = 5.4342545454;
    cout << fraction(9) << x << endl;
    int c[] = {2,1,4,3,11,2,5,32};

    reverse(c,c+8);
    cout << "reverse of a array : ";
    printarr(c,8);

    mem(c,0);
    printarr(c,8);

    char u;
    cin >> u;
    isupper(u) ? cout << "upper yes" << endl : cout << "upper no" << endl;
    islower(u) ? cout << "low yes" << endl : cout << "low no" << endl;
    isdigit(u) ? cout << "dig yes" << endl : cout << "dig no" << endl;
    isalpha(u) ? cout << "alp yes" << endl : cout << "alp no" << endl;
    char low = tolower(u), up = toupper(u);
    cout << "Making low: " << low << endl;
    cout << "Making up: " << up << endl;
    return 0;
}

