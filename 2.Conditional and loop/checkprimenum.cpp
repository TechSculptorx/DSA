#include <iostream>
using namespace std;

int main () {
  int n;
  cout << "Enter a number: ";
  cin >> n;

  int d = 2;
  bool divided = false;

  // while (d <= n - 1)
  while (d <= (n / 2)) {
    cout << d << endl;

    if(n % d == 0) {
      cout << "Not Prime" << endl;
      divided = true;
    }

    d = d + 1;
  }

  if(!divided) {
    cout << "Prime" << endl;
  }
}
