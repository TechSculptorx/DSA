#include <iostream>
using namespace std;

int main () {
  int a, b, c;
  cout << "Enter three integers: ";
  cin >> a >> b >> c;

  int firstSide = a + b;
  int secondSide = a + c;
  int thirdSide = b + c;

  if((firstSide > c) && (secondSide > b) && (thirdSide > a)) {
    if(a == b && b == c) {
      cout << "Equilateral Triangle" << endl;
    } else if (a == b || b == c || a == c) {
      cout << "Isosceles Triangle" << endl;
    } else {
      cout << "Scalene Triangle" << endl;
    }
  } else {
    cout << "Not a Triangle" << endl;
  }
}
