#include <iostream>
using namespace std;

int main () {
  int n;
  cin >> n;

  int sum = 0;
  int count = 0;

  for (int i = 1; n > count; i++) {
    sum = (3 * i) + 2;
    if (sum % 4 == 0) {
      continue;
    }
    cout << sum << " ";
    count++;
  }
}
