#include <iostream>
using namespace std;

int main () {
    int i = 10;
    int *p = &i;
    int **q = &p;
    int ***r = &q;

    cout << p << endl;
    cout << q << endl;
    cout << r << endl;
}
