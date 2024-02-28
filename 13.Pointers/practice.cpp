#include <iostream>
using namespace std;

int main () {
    // int i = 10;
    // cout << &i << endl;
    // int *p = &i;
    // cout << *p << endl;

    // int a = 10; // a = 730
    // int *p = &a; // p = 830 == 730
    // int **q = &p;  // q = 930 == 830
    // int b = 20; // b = 1000
    // *q = &b; // q = 930 == 1000
    // (*p)++; // 11
    // cout << a << " " << b << endl; // 11 20

    // int a = 100; // a adress = 730
    // int *p = &a; // p adress = 830 but value of p 730
    // int **q = &p; // q adress = 930 but value of q 830
    // int b = (**q)++ + 4; // b = 100 + 4 = 104
    // cout << a << " " << b << endl;

      int a = 100; // adress of a = 700
      int *p = &a; // adress of p = 800 but value of p = 700
      int **q = &p; // adress of q = 900 but value of q = 800
      int b = (**q)++; // b = 100
      int *r = *q; // r = 700
      (*r)++; // a = 101
      cout << a << " " << b << endl; // 101 100
}
