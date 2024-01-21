#include <iostream>
using namespace std;

int main () {
  int n;
  cin >> n;

  for (int i = 1; i <= n; ++i) {
        // Print spaces
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }

        // Print increasing numbers
        for (int j = i; j >= 1; --j) {
            cout << j;
        }

        // Print decreasing numbers (excluding the first one)
        for (int j = 2; j <= i; ++j) {
            cout << j;
        }

        cout << endl;
    }
}
