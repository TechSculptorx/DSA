#include <iostream>
using namespace std;

int main () {
  int day = 5;

  switch (day) {
    case 6 :
      cout << "Today is Saturday" << endl;
      break;

    case 7 :
      cout << "Today is Sunday" << endl;
      break;

    default :
      cout << "Looking forward to the Weekend" << endl;
  }
}
