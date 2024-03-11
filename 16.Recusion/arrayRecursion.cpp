#include <iostream>
using namespace std;

bool is_sorted (int arr [], int size) {
    if (size == 0 || size == 1) {
        return true;
    }

    if (arr[0] > arr[1]) {
        return false;
    }

    bool isSmallerSorted = is_sorted(arr + 1, size - 1);
    return isSmallerSorted;
}

int main () {
    int arr[] = {1, 2, 5, 3, 4};

    if (is_sorted(arr, 5)) {
        cout << "Array is sorted" << endl;
    } else {
        cout << "Array is not sorted" << endl;
    }

    return 0;
}
