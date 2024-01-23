#include <iostream>
using namespace std;

int main () {
  char c;
  c = cin.get();

  int digit = 0;
  int chara = 0;
  int space = 0;

  while (c != '$') {
    if(isalpha(c)) {
      chara++;
    } else if (isdigit(c)) {
      digit++;
    } else if (isspace(c)) {
      space++;
    }
    c = cin.get();
  }
    cout << chara << " " << digit << " " << space << endl;
}
