#include <iostream>
using namespace std;

void mergeSort (int arr[], int l, int r) {
    if (l >= r) {
        return;
    }

    int mid = (l + r) / 2;

    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);

    int i = l;
    int j = mid + 1;
    int k = 0;
    int temp[r - l + 1];

    while (i <= mid && j <= r) {
        if (arr[i] < arr[j]) {
            temp[k] = arr[i];
            i++;
        } else {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    while (i <= mid) {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while (j <= r) {
        temp[k] = arr[j];
        j++;
        k++;
    }

    for (int i = l; i <= r; i++) {
        arr[i] = temp[i - l];
    }

    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return;
}

int main () {
    int arr[] = {12, 11, 13, 5, 6, 7};

    mergeSort(arr, 0, 2);
    mergeSort(arr, 3, 5);
}
