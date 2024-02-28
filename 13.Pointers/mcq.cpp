#include <iostream>
using namespace std;
int main()
{
//   int arr[] = {4, 5, 6, 7};
//   int *p = (arr + 1);
//   cout << *arr + 9;

//  int numbers[5];
//   int * p;
//   p = numbers;
//   *p = 10;
//   p = &numbers[2];
//   *p = 20;
//   p--;
//   *p = 30;
//   p = numbers + 3;
//   *p = 40;
//   p = numbers;
//   *(p+4) = 50;
//   for (int n=0; n<5; n++) {
//      cout << numbers[n] << ",";
//   }

//   char *ptr;
//   char Str[] = "abcdefg";
//   ptr = Str;
//   ptr += 5;
//   cout << ptr;
//   return 0;

// float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
//   float *ptr1 = &arr[0];
//   float *ptr2 = ptr1 + 3;
//   cout<<*ptr2<<" ";
//   cout<< ptr2 - ptr1;
  char st[] = "ABCD";
  for(int i = 0; st[i] != '\0'; i++) {
     cout << st[i] << *(st)+i << *(i+st) << i[st];
  }

  return 0;
}
