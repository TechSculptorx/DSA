#include <iostream>
#include <string.h>
using namespace std;

void reverse(char str[]) {
  int i = 0;
  int j = strlen(str) - 1;

  while (i < j) {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    i++;
    j--;
  }
}

int main () {
  char input[100];
  cout << "Enter a string: ";
  cin.getline(input, 100);

  reverse(input);

  cout << "You entered: " << input << endl;
}
