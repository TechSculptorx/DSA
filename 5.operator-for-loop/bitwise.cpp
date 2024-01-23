#include <iostream>
using namespace std;

int main () {
  int ror = 15 | 30;
  int rxor = 15 ^ 30;
  int rand = 15 & 30;
  int rnot = ~15;
  int lsh = 15 << 2;
  int rsh = 15 >> 2;

  cout << "15 | 30 = " << ror << endl;
  cout << "15 ^ 30 = " << rxor << endl;
  cout << "15 & 30 = " << rand << endl;
  cout << "~15 = " << rnot << endl;
  cout << "15 << 2 = " << lsh << endl;
  cout << "15 >> 2 = " << rsh << endl;

}
