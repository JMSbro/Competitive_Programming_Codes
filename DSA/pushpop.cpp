#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> stk;
    stk.push(5);
    stk.push(7);
    stk.push(9);
    stk.push(4);
  
    cout << "Stack Values: ";
    while (!stk.empty()) {
        cout << stk.top() << ' ';
        stk.pop();
    }
    cout << endl;
  
    return 0;
}