#include <iostream>
using namespace std;

bool checkMember(int n){
  int a = 1;
  int b = 0;
  int c = a + b;

  if(n == 0 || n == 1) {
    return true;
  }

  for (int i = 1; i < n; i++) {
    if (c == n) {
      return true;
    }
    a = b;
    b = c;
    c = a + b;
  }

  return false;
}

int main () {
  int n;
  cin >> n ;
  if(checkMember(n)){
    cout << "true" << endl;
  }else{
    cout << "false" << endl;
  }
}
