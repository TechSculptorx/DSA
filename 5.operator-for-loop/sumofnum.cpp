#include <iostream>
using namespace std;

int main () {
  int n, choice;
  cin >> n >> choice;

  int sum = 0;
  int product = 0;

  for (int i = 1; i <= n; i++) {
    if (choice == 1) {
      sum += i;
    } else if (choice == 2) {
      product *= i;
    } else {
      cout << "-1";
    }
  }

   if (choice == 1) {
	  cout << sum;
  } else if (choice == 2) {
	  cout << product;
  }
}
