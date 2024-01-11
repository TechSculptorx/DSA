#include <iostream>
using namespace std;

int main () {
  int n, sumEven = 0, sumOdd = 0;
  cin >> n;

  while (n > 0) {
    int digit = n % 10;

    if (digit % 2 == 0) {
      sumEven += digit;
    } else {
      sumOdd += digit;
    }

    n /= 10;
  }
    cout << sumEven << " " << sumOdd << endl;
}
