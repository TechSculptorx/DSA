#include <iostream>
using namespace std;

void arrOperation (int arr[], int size) {
  arr[0] = 10;
}

int main () {
  int arr[5] = {1, 2, 3, 4, 5};

  arrOperation(arr, 5);

  cout << arr[0] << endl;
}
