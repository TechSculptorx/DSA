#include <iostream>
using namespace std;

int main () {
  int n;

  while (true) {
    cin >> n;

    if (n == 50) {
      cout << n << " ";
      break;
    } else if (n == 15) {
      continue;
    } else if (n < 0) {
      continue;
    }

    cout << n << " ";
  }
}
