#include <iostream>
using namespace std;

int main () {
  int n;
  cin >> n;

  int input[100];
  int ans = 0;

  for (int i = 0; i < n; i++) {
    cin >> input[i];
    ans += input[i];
  }

  cout << ans << endl;
}
