#include <iostream>
using namespace std;

int main () {
  int n;
  cin >> n;

  int i = 1;
  int n1 = (n + 1) / 2;
  int n2 = n / 2;

  while (i <= n1) {
    int spaces = 1;
    while (spaces <= n1 - i) {
      cout << " ";
      spaces++;
    }

    int j = 1;
    while (j <= 2 * i - 1) {
      cout << '*';
      j++;
    }

    cout << endl;
    i++;
  }

  i = n2;
  while (i >= 0) {
    int spaces = 1;
    while (spaces <= n2 - i + 1) {
      cout << " ";
      spaces++;
    }

    int j = 1;
    while (j <= 2 * i - 1) {
      cout << '*';
      j++;
    }

    cout << endl;
    i--;
  }
}
