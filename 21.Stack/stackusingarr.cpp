#include <iostream>
using namespace std;
#include "StackUsingArray.cpp"

int main () {
    // Stack using array

    StackUsingArray s1 = StackUsingArray<char>();

    s1.push(100);
    s1.push(101);
    s1.push(102);
    s1.push(103);
    s1.push(104);

    cout << s1.top() << endl;
}
