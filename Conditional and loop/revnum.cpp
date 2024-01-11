#include <iostream>
using namespace std;

int main () {
  int n, currentDigit, rev = 0;
  bool firstDigit = false;
  cin >> n;

  if(n == 0) {
    cout << "0" << endl;
  } else {
  while (n > 0) {
    currentDigit = n % 10;

    if(currentDigit == 0 && !firstDigit) {
      n /= 10;
      firstDigit = true;
      continue;
    }

    rev = (rev * 10) + currentDigit;
    n /= 10;
  }
  cout << rev << endl;
  }
}
