#include <iostream>
#include <cmath>
using namespace std;

bool armstrong(int n) {
  int ans = 0;
  int fakeDigit = n;
  int numberOfDigits = 0;

  while (fakeDigit > 0) {
    numberOfDigits++;
    fakeDigit /= 10;
  }

  int num = n;

  while(num > 0) {
    int last = num % 10;
    int crt = pow(last, numberOfDigits);
    ans += crt;
    num /= 10;
  }

cout << ans << endl;

 if (ans == n) {
  return true;
 } else {
  return false;
 }
}

int main () {
  int n;
  cin >> n;

  bool result = armstrong(n);
  result == 1 ?  cout << "true" << endl : cout << "false" << endl;
}
