#include <iostream>
using namespace std;

int main () {
    // int i;
    // cout << i << endl;

    // int *p;
    // cout << *p << endl;

    int a = 100, b = 200;
    int *p = &a, *q = &b;
    p = q;
    cout << *p << endl;
    cout << *q << endl;
}
