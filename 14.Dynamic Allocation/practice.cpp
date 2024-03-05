// #include <iostream>
// using namespace std;

// void func(int p){
//     cout << p << " ";
// }

// int main(){
//     int i = 10;
//     int &p = i;
//     func(p++);
//     cout << i;
// }

// #include <iostream>
// using namespace std;

// #define MULTIPLY(a, b) a*b

// int main(){
//     cout << MULTIPLY(2+3, 3+5);
//     return 0;
// }

#include <iostream>
using namespace std;

#define SQUARE(x) x*x

int main(){
    int x = 36 / SQUARE(6);
    cout << x;

    return 0;
}
