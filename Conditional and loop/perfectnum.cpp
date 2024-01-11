#include <iostream>
using namespace std;

int main () {
  int n;
  cin >> n;

  int i = 1, sum = 0;


  do {
    if (n % i == 0) {
      sum += i;
    }
    i++;
  } while (i <= (n / 2));

  if (sum == n) {
    cout << n << " is a perfect number" << endl;
  } else {
    cout << n << " is not a perfect number" << endl;
  }
}
