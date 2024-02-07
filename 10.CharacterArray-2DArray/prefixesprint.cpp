#include <iostream>
#include <cstring>
using namespace std;

void allPrefixes(char str[]) {
  int length = strlen(str);
  for (int i = 0; i < length; i++) {
    for (int j = 0; j <= i; j++) {
      cout << str[j];
    }
    cout << endl;
  }
}

int main () {
  char str[100];
  cout << "enter a array: ";
  cin.getline(str, 100);
  allPrefixes(str);
}
