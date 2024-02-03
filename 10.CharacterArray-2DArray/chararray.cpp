#include <iostream>
using namespace std;

int main () {
  char name[100];

  cin >> name;

  name[4] = 'x';
  name[3] = 'd';
  name[1] = '\0';

  cout << name << endl;
}
