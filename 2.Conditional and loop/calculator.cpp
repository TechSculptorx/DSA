#include <iostream>
using namespace std;

int main() {
  int choice, a, b;

  while (true) {
  cin >> choice;
    switch (choice) {
    case 1 :
      cin >> a >> b;
      cout << a + b << endl;
      break;

    case 2 :
      cin >> a >> b;
      cout << a - b << endl;
      break;

    case 3 :
      cin >> a >> b;
      cout << a * b << endl;
      break;

    case 4 :
      cin >> a >> b;
      cout << a / b << endl;
      break;

    case 5 :
      cin >> a >> b;
      cout << a % b << endl;
      break;

    case 6 :
      exit(0);
      break;

    default :
      cout << "Invalid Operation" << endl;
      break;
  }
  }
}
