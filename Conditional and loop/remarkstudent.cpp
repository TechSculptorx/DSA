#include <iostream>
using namespace std;

int main () {
  int mark;

  cin >> mark;

  if (mark >= 75) {
    cout << "Distinction" << endl;
  } else if (mark >= 50 && mark < 75) {
    cout << "Average" << endl;
  } else if (mark >= 35 && mark < 50) {
    cout << "Below Average" << endl;
  }

}
