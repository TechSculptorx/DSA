#include <iostream>
using namespace std;
#include "Fraction.cpp"

int main () {
    Fraction f1(10, 3);

    // Fraction f5 = f1++;
    // f1.print();
    // f5.print();

    // Fraction f5 = ++(++f1);

    // f1.print();
    // f5.print();

    Fraction f2(5, 2);

    (f1 += f2) += f2;

    f1.print();
    f2.print();

    Fraction f3  = f1.add(f2);
    Fraction f4 = f1 + f2;

    // f1.print();
    // f2.print();
    // f3.print();
    // f4.print();
}
