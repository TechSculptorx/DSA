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

      // for(int i = 1; i < 5; i = i + 1){
      //   i=i-1;
      //   cout << i << " ";
      // }

//       for(int i = 0; i < 2; i = i + 1) {
//      for(int j = 0; j < 2; j = j + 1) {
//           if (j == 1)
//               break;
//           cout << j << " ";
//       }
//  }

// int i = 1;
// while(i < 3) {
//     int j = 1;
//     while(j < 5) {
//         if(j == 3) {
//             break;
//         }
//         cout << j << " ";
//         j++;
//     }
//     i++;
// }

// int i = 1;
// while(i < 3) {
//     int j = 0;
//     while(j < 5) {
//         j++;
//         if(j == 3) {
//             continue;
//         }
//         cout << j << " ";
//     }
//     i++;
// }

// for (int i = 1; i < 5; i++) {
//   for (int j = 1; j < i; j++) {
//     cout << j << " ";
//   }
//   cout << j << endl;
// }

    // int a = 10;
    // while(a > 5) {
    //     int a = 1;
    //     cout << a << " ";
    //     a--;
    // }

    // int p = 100,q=0;
    // if(p > 20) {
    //   if(p < 20 && !q  ) {
    //     cout<<p? -50 :100;
    //     cout<<"coding";
    //   }
    // } else {
    // cout<<"ninjas";
    // }

    // int x = 10;

    // while (x <= 10) {
    //   x += 1;
    //   cout << x << endl;
    // }

  //   int n1 = 5, n2 = 10, n3 = 15, ans;
  // ans = (n1 > n2) ?(n1>n3? n1 : n3) :(n2>n3?n2 : n3);
  // cout<<ans + 5;

  int a =5, b=4, c=0;
       if(a && b)
           cout<<a+b<<" ";
       if((a && c) || c)
           cout<<a * b<<" ";
       if(a || c )
           cout<<b+c;
}
