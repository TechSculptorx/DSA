#include <iostream>
using namespace std;

int main () {
  int n;
  cin >> n;

  int a = 1;
  int b = 0;
  int c = a + b;

  for (int i = 1; i < n; i++) {
    a = b;
    b = c;
    c = a + b;
  }

  cout << c << endl;
}
