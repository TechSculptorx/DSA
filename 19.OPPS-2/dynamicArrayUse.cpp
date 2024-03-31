#include <iostream>
using namespace std;
#include "DynamicArray.cpp"

int main () {
    DynamicArray d1(5);

    for (int i = 1; i <= 5; i++) {
        d1.add(i * 10);
    }

    d1.print();

    DynamicArray d2 = d1;

    d1.add(0, 100);

    d1.print();
    d2.print();
}
