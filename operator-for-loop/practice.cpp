#include <iostream>
using namespace std;

int main () {
  //  int x= 10, y = 1;
  //        if (++x >10 || x / 0 == 0)
  //           cout << y;
  //        else
  //            cout << x; // expected 10 got 1

    // int x = 15;
    // int y = x++;
    // int z = ++x;
    // cout << y << " " << z; // expected 15 17

      // int g = 3;
      // cout << (++g * 8); // expected 32

      // int x = 10;
      // int y = 20;
      // if (x++ > 10 && ++y > 20 ) {
      //   cout << "Inside if ";
      // } else {
      //   cout << "Inside else ";
      // }
      // cout << x << " " << y; // expected inside else 11 21 got 11 20

      // int x = 10;
      // int y = 20;
      // if (x++ > 10 || ++y > 20 ) {
      //   cout << "Inside if ";
      // } else {
      //   cout << "Inside else ";
      // }
      // cout << x << " " << y; // expected inside if 11 21

      // for(int i = 0; i < 5; i = i + 1){
      //   cout << i << " ";
      //   i = i + 1;
      // }

      for(int i = 1; i < 5; i = i + 1){
        i=i-1;
        cout << i << " ";
      }
}
