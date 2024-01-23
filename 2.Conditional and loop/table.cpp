#include <iostream>
using namespace std;

int main () {
  int n;
  cin >> n;

  int i = 1;
  int sum = 10;
  while (i <= sum) {
    cout << n * i << endl;
    i = i + 1;
  }
}
