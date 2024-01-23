#include <iostream>
using namespace std;

int main () {
  int num, power;
  cin >> num >> power;

  int res = 1;

  while (power > 0) {
    res = res * num;
    power--;
  }

  cout << res << endl;
}
