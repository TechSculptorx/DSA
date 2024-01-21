#include <iostream>
#include <climits>
using namespace std;

int main () {
  int n;
  cin >> n;

  int first, second;
  first = second = -2147483648;

  while (n > 0) {
    int num;
    cin >> num;

    if (num > first) {
        second = first;
        first = num;
    } else if (num > second && num < first) {
        second = num;
    }

    n--;
  }

  if (second == -2147483648) {
    cout << "-2147483648";
  } else {
    cout << second;
  }
}
