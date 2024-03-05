#include <iostream>
using namespace std;

int add(int a, int b = 20) {
    return a + b;
}

int main () {
    cout << add(100) << endl;
    cout << add(100, 200) << endl;
    return 0;
}
