#include <iostream>
using namespace std;

void print1ton (int n) {
  for (int i = 1; i <= n; i++) {
    cout << i << " ";
  }
}

int main () {
  print1ton(10);
}
