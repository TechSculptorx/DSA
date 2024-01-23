#include<iostream>
#include<cmath>
using namespace std;

int main() {
  int allow {};
  int basic {};
  char grade {};


  cin >> basic >> grade;

  float hra {0.2 * basic};
  float da {0.5 * basic};
  float pf {0.11 * basic};

  if (grade == 'A') {
    allow = 1700;
  } else if (grade == 'B') {
    allow = 1500;
  } else {
    allow = 1300;
  }

  float totalSalary {round(float(basic) + hra + da + float(allow) - pf)};
  cout << int(totalSalary) << endl;
}
