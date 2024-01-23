#include <iostream>
using namespace std;

int main () {
  int n;
  cin >> n;

  int i = 2;
  bool isPrime = true;

  while (i <= (n / 2)) {
    if (n % i == 0) {
      isPrime = false;
      break;
    }
    i++;
  }

  if (isPrime) {
    cout << "-1" << endl;
  } else {
    int number = 2;

    while (number <= (n / 2)) {
      if (n % number == 0) {
        cout << number << " ";
      }
      number++;
    }
  }
}
