#include <iostream>
using namespace std;

int main () {
    int *p = new int; // Heap memory allocation and p is a pointer to that memory location but it is in stack memory so 4 byte in heap and 8 byte in stack
    *p = 5;

    cout << *p << endl;

    int *a = new int[50]; // 200 byte in heap memory
    int n;
    cin >> n;
    int *b = new int[n]; // n*4 byte in heap memory

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int max = b[0];
    for (int i = 0; i < n; i++) {
        if (b[i] > max) {
            max = b[i];
        }
    }
    cout << "Max: " << max << endl;
}
