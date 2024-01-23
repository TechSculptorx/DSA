#include <iostream>
using namespace std;

int main () {
  int n;
  cout << "Enter a number: ";
  cin >> n;

  // Simple one while break solution

  int i = 2;
  bool isPrime = true;

  while (i <= (n / 2)) {
    cout << i << endl;

    if (n % i == 0) {
      cout << "Not prime" << endl;
      isPrime = false;
      break;
    }
    i++;
  }

  if (isPrime) {
    cout << "Prime" << endl;
  }

  // Neted while break solution

  // int currentNumber = 2;

  // while (currentNumber <= (n - 1)){
  //   int i = 2;
  //   bool isPrime = true;

  //   while (i <= (currentNumber / 2)) {
  //     if (currentNumber % i == 0) {
  //       isPrime = false;
  //       break;
  //     }
  //     i++;
  //   }
  //   cout << currentNumber << " " << isPrime << endl;
  //   currentNumber++;
  // }
}
