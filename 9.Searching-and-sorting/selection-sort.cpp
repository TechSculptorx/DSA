#include <iostream>
using namespace std;

void swapElement(int input[], int i, int minIndex) {
  int temp = input[i];
  input[i] = input[minIndex];
  input[minIndex] = temp;
}

int minElement(int input[], int i, int n) {
  int min = input[i];
  int minIndex = i;

  for (int j = i + 1; j < n; j++) {
    if (input[j] < min) {
      min = input[j];
      minIndex = j;
    }
  }

  return minIndex;
}

void selectionSort(int input[], int n) {
  for (int i = 0; i < n - 1; i++) {
    // First find the smallest element in the array
    int minIndex = minElement(input, i, n);

    // Swap the smallest element with the first element
    swapElement(input ,i , minIndex);
  }
}

int main () {

  int input[] = {8, 7, 6, 5, 4, 3, 2, 1};

  selectionSort(input, 8);

  for (int i = 0; i < 8; i++) {
    cout << input[i] << " ";
  }

}
