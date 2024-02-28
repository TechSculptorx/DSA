#include <iostream>
using namespace std;

void print(int *p) {
    cout << *p << endl;
}

void incrementPointer(int *p) {
    p = p + 1;
}

void incrementValue(int *p) {
    (*p)++;
}

int main () {
    int i = 10;
    int *p = &i;
    print(p);

    cout << p << endl;
    incrementPointer(p); // It is same it is not changes because of we learn the pass by value are not changing because of it it make a copy
    cout << p << endl;

    cout << *p << endl;
    incrementValue(p);
    cout << *p << endl;
}
