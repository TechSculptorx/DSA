#include <iostream>
using namespace std;

int main () {
  int a, b;
  cout << "Enter two integers: ";
  cin >> a >> b;

  // Simple if statement
  // if(a == b) {
  //   cout << "They are equal " << a << " = " << b << endl;
  // }

  // nested if statement
  // if(a == b){
  //   cout << "They are equal" << a << " = " << b << endl;

  //   if(a > 0 && b > 0) {
  //     cout << "They are positive" << endl;
  //   }
  // }

  // if-else statement
  // if(a == b) {
  //   cout << "They are equal" << a << " = " << b << endl;
  // } else {
  //   cout << "They are not equal" << a << " != " << b << endl;
  // }

  // nested if else
  // if(a == b) {
  //   cout << "They are equal" << a << " = " << b << endl;
  // } else {
  //   if(a > b) {
  //     cout << "a is greater than b " << a << " > " << b << endl;
  //   } else {
  //     cout << "b is greater than a " << a << " < " << b << endl;
  //   }
  // }

  // if-else if-else
  if(a == b) {
    cout << "They are equal " << a << " = " << b << endl;
  } else if(a > b) {
    cout << "a is greater than b " << a << " > " << b << endl;
  } else {
    cout << "b is greater than a " << a << " < " << b << endl;
 }
}
