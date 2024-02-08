#include <iostream>
using namespace std;

int main () {
  int input[100][100];
  int m, n;
  cin >> m >> n;


  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> input[i][j];
    }
  }

  // print row wise array
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << input[i][j];
    }
    cout << endl;
  }

  // Print column wise array
  for (int j = 0; j < n; j++) {
    for (int i = 0; i < m; i++) {
      cout << input[i][j];
    }
    cout << endl;
  }

}
