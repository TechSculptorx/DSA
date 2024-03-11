#include <iostream>
using namespace std;

int firstIndex(int input[], int size, int x) {
    if (size == 0) {
        return -1;
    }

    if (input[0] == x) {
        return 0;
    }

    int smallOutput = firstIndex(input + 1, size - 1, x);
    if (smallOutput == -1) {
        return -1;
    } else {
        return smallOutput + 1;
    }
}

int main () {
    int arr[] = {1, 2, 5, 3, 4};

    cout << firstIndex(arr, 5, 3) << endl;
}
