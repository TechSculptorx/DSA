#include <iostream>
using namespace std;

int main () {
  int n;
  cin >> n;

  int dec = 0;
  int pv = 1;

  while (n > 0) {
    int lastDigit = n % 10;
    dec = dec + lastDigit * pv;
    pv = pv * 2;
    n /= 10;
  }

  cout << dec << endl;
}
