#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    int smallOutput = factorial(n - 1);
    return n * smallOutput;
}

// int factorial(int n) {
//     int ans = 1;
//     for (int i = 1; i <= n; i++) {
//         ans *= i;
//     }
//     return ans;
// }

int main () {
    int n;
    cin >> n;

    int output = factorial(n);
    cout << output << endl;
}
