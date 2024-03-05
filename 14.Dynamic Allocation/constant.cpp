#include <iostream>
using namespace std;

int main () {

    // Constant int
    const int a = 10;
    int const b = 20;

    // Constant reference
    int j = 10;
    const int &k = j; // you can not change through k because it constant reference always path is constant not value or storage
    j++;

    // Reference from constant int
    const int l = 100;
    // int *p = &l; // you can not change through p because it is pointer of constant int
    // int &m = ; // you can not change through m because it is reference of constant int
}
