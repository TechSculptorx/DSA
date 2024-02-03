#include <iostream>
using namespace std;

int charLenght (char input[]) {
  int i = 0;
  while (input[i] != '\0') {
    i++;
  }
  return i;
}

int main () {
  char name[100];

  cin >> name;

  cout << "The length of the string is: " << charLenght(name) << endl;
}
