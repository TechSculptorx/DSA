#include <iostream>
using namespace std;

int main () {
  int n;
  cin >> n;

  int i = 1, sum = 0;
  if(n == 0) {
    cout << "0" << endl;
  } else {
    while (i <= n) {
    if (i % 2 == 0) {
      sum = sum + i;
    }
    i = i + 1;
    }
    cout << sum << endl;
  }
}
