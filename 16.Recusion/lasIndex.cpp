#include <iostream>
using namespace std;

int lastIndex (int arr[], int size, int x) {
    if (size == 0) {
        return -1;
    }

    if (arr[size - 1] == x) {
        return size - 1;
    }

    int smallOutput = lastIndex(arr, size - 1, x);

    if (smallOutput == -1) {
        return -1;
    } else {
        return smallOutput;
    }

    // if (smallOutput != -1) {
    //     return smallOutput + 1;
    // } else {
    //     if (arr[0] == x) {
    //         return 0;
    //     } else {
    //         return -1;
    //     }
    // }
}

int main () {
    int arr[] = {1, 2, 5, 3, 4};

}
