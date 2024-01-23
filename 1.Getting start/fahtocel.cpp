#include <iostream>
using namespace std;

int main () {
  int f;

  cout << "Enter the Fahrenheit value: ";
  cin >> f;

  int c = (f - 32) * (5.0 / 9);
  cout << "The Celsius value is: " << c << endl;

  int r = 10 % 3;
  cout << 10 % 3 << endl;

  int a, b;
  cout << "Enter two numbers: ";
  cin >> a >> b;

  bool isEqual = a == b;
  bool greater = a > b;
  bool lesser = a < b;

  cout << "Are they equal : " << isEqual << endl;
  cout << "A is greter : " << greater << endl;
  cout << "B is greter : " << lesser << endl;

  bool third = isEqual && greater;
  cout << "Not eqal and greter : " << third << endl;

  bool fourth = isEqual || greater;
  cout << "Equal or greter : " << fourth << endl;
}
