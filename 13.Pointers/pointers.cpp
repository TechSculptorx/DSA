#include <iostream>
using namespace std;

int main () {
    int i = 10;
    int *p = &i;
    // cout << sizeof(*p) << endl;

    // i++;
    // cout << i << endl;
    // cout << *p << endl;

    int a = i;
    a++;
    cout << a << endl;
    cout << i << endl;
    cout << *p << endl;

    i = 12;
    *p = 20;
    cout << i << endl;
    cout << *p << endl;
}
