#include <iostream>
using namespace std;

int main () {
  int n;
  cin >> n;

  bool isPrime = true;

  for (int i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      cout << "Not prime" << endl;
      isPrime = false;
      break;
    }
  }

  if (isPrime) {
    cout << "Prime" << endl;
  }
}
