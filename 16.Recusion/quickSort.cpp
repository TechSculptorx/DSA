#include <iostream>
#include <algorithm>
using namespace std;

int partition(int arr[], int l, int r){
    int count = 0;

    for (int i = l + 1; i <= r; i++) {
        if (arr[i] <= arr[l]) {
            count++;
        }
    }

    swap(arr[l], arr[l + count]);

    int partitionIndex = l + count;
    int x = arr[partitionIndex];

    int i = l;
    int j = r;

    while (i < partitionIndex && j > partitionIndex) {
        if (arr[i] <= x) {
            i++;
        } else if (arr[j] > x) {
            j--;
        } else {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    return partitionIndex;
}

void quickSort(int arr[], int l, int r) {
    if (l >= r) {
        return;
    }

    int c = partition(arr, l, r);

    quickSort(arr, l, c - 1);
    quickSort(arr, c + 1, r);
}

int main () {
    int arr[] = {28, 552, 95, 337, 413, 899, 784, 962, 432, 275, 586, 810, 685, 267, 814, 13, 190, 67, 201, 164, 657, 462, 313 ,310 ,366 ,848 ,375, 751, 751};

    quickSort(arr, 0, 28);

    for (int i = 0; i < 29; i++) {
        cout << arr[i] << " ";
    }
}
