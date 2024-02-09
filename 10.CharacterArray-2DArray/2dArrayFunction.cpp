#include <iostream>
using namespace std;

// How to pass a 2D array to a function

void printArray(int a[][100], int m, int n) {
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}

int main () {
  int n, m;
  cin >> n >> m;

  int a[100][100];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }

  printArray(a, m, n);
}
