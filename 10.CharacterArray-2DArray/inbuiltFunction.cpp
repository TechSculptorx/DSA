#include <iostream>
#include <cstring>
using namespace std;

int main () {
  // char str[100];
  // cout << "enter a array: ";
  // cin.getline(str, 100);

  // char str2[100];
  // cout << "enter a sec array: ";
  // cin.getline(str2, 100);

  // cout << strlen(str);
  // cout << strcmp(str, str2);

  char str1[100] = "abcd";
  char str2[100] = "xy";

  cout << "Before strcpy: " << endl;
  cout << str1 << endl << str2 << endl;
  strncpy(str1, str2, 4);
  cout << "After strcpy: " << endl;
  cout << str1 << endl << str2 << endl;
}
