#include <iostream>
using namespace std;

int main () {
  int n[];

  for (int i = 0; i < 7; i++) {
    n[i] = i;
  }

  for (int i = 0; i < 7; i++) {
    cout << n[i] << endl;
  }
}
