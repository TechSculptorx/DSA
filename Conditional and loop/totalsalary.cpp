#include <iostream>
#include <cmath>
using namespace std;

int main () {
  int allow, basic;
  double totalSalary;
  char grade;
  cin >> basic >> grade;

  if (grade == 'A') {
    allow = 1700;
  } else if (grade == 'B') {
    allow = 1500;
  } else {
    allow = 1300;
  }

  totalSalary = (1.59 * basic) + allow;
  cout << round(totalSalary) << endl;
}
