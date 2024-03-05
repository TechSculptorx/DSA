#include <iostream>
using namespace std;

inline int max(int a, int b) {
    return (a > b) ? a : b;
}

int main () {
    int a = 20;
    int b = 10;
    max(a,b);
}
