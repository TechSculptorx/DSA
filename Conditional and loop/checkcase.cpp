#include <iostream>
using namespace std;

int main () {
  char a;
  cout << "Enter an char: ";
  cin >> a;

  if(isupper(a)) {
    cout << 1 << endl;
  } else if(islower(a)) {
    cout << 0 << endl;
  } else {
    cout << -1 << endl;
  }
}
