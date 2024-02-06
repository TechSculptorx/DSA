#include <iostream>
using namespace std;

int main () {
  char input[100];
  cout << "Enter a string: ";
  cin.getline(input, 100, 'o');
  cout << "You entered: " << input << endl;
}
