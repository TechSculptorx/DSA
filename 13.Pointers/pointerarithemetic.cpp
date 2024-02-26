#include <iostream>
using namespace std;

int main () {
    int i = 10;
    int *p = &i;
    cout << p << endl;
    p = p + 1; // it point to next memory location ex next 4 bytes +
    cout << p << endl;
}
