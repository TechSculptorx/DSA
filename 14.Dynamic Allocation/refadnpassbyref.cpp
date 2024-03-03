#include <iostream>
using namespace std;

void increment(int &i) {
    i++;
}

int main () {
    int i = 10;
    int &j = i;

    increment(i);
    cout << "i = " << i << endl;
    cout << "j = " << j << endl;

    int k = 200;
    j = k;
    cout << "i = " << i << endl;
    cout << "j = " << j << endl;
}
