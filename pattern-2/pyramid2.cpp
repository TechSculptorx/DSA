#include <iostream>
using namespace std;

int main () {
  int n;
  cin >> n;

  int i = 1;
  while (i <= n) {
   int spaces = 1;
    while (spaces <= n - i) {
      cout << " ";
      spaces++;
    }

    int j = 1;
    int p = i;
    while (j <= i) {
      cout << p;
      p++;
      j++;
    }

    j = 1;
    p = 2 * i - 2;
    while (j <= i - 1) {
      cout << p;
      p--;
      j++;
    }

    cout << endl;
    i++;
  }
}
