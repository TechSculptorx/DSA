#include<iostream>
using namespace std;


int main(){

  // Write your code here

  int n;
  cin >> n;

  for (int i = 1; i <= n; ++i) {
        // Print numbers
        for (int j = 1; j <= n - i + 1; ++j) {
            cout << j;
        }

        // Print asterisks
        for (int j = 1; j <= 2 * (i - 1); ++j) {
            cout << "*";
        }

        // Print numbers in reverse order
        for (int j = n - i + 1; j >= 1; --j) {
            cout << j;
        }

        cout << endl;
    }

}
