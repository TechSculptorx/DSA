#include <iostream>
using namespace std;

bool isPrime (int n) {
  bool prime = true;

  for (int i = 2; i < n / 2; i++) {
    if (n % i == 0) {
      prime = false;
      break;
    }
  }

  prime ? cout << n << " Prime " << endl : cout << n << " Not prime " << endl;
  return prime;
}

int main () {
  bool ans = isPrime(7);
  ans = isPrime(8);
  ans = isPrime(85);
  ans = isPrime(13);
}
