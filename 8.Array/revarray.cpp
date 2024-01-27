#include <iostream>
using namespace std;

void revers (int arr[], int n) {
  int i = 0;
  int j = n - 1;

  while (i < j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;

    i++;
    j--;
  }

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

int main () {
  int arr[5] = {1, 2, 3, 4, 5};
  revers(arr, 5);
}
