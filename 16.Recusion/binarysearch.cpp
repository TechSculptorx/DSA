#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int x, int si, int li) {
    if (si > li) {
        return -1;
    }

    int mid = (si + li) / 2;

    if (arr[mid] == x) {
        return mid;
    }

    if (arr[mid] > x) {
        return binarySearch(arr, n, x, si, mid - 1);
    } else {
        return binarySearch(arr, n, x, mid + 1, li);
    }
}

int main () {
    int n;
    cin >> n;

    int arr[5] = {1, 2, 3, 4, 5};

    cout << binarySearch(arr, 5, n, 0, 4) << endl;
}
