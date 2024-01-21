#include <iostream>
using namespace std;

int main () {
  long n;
  cin >> n;

  long bin = 0;
  long pv = 1;

  while (n > 0) {
    long lastDigit = n % 2;
    bin = bin + lastDigit * pv;
    pv = pv * 10;
    n /= 2;
  }

  cout << bin << endl;
}
