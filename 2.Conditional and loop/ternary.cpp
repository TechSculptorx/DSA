#include <iostream>
using namespace std;

int main () {
  // Simple ternary operator example
  int n = 10;

  if (n % 2 == 0) {
    cout << "n is even" << endl;
  } else {
    cout << "n is odd" << endl;
  }

  (n % 2 == 0) ? cout << "n is even" << endl : cout << "n is odd" << endl;

  // nested ternary operator example

  if(n % 3 == 0) {
    cout << "remainder is 0" << endl;
  } else if (n % 3 == 1) {
    cout << "remainder is 1" << endl;
  } else {
    cout << "remainder is 2" << endl;
  }

  (n % 3 == 0) ? cout << "remainder is 0" << endl : (n % 3 == 1) ? cout << "remainder is 1" << endl : cout << "remainder is 2" << endl;

}
