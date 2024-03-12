#include <iostream>
using namespace std;


int countZeros(int n) {
    // Write your code here

    if (n <= 9) {
        if (n == 0) {
            return 0;
        } else {
            return 1;
        }

        int last = n % 10;

        if (last == 0) {
            return 1 + countZeros(n / 10);
        } else {
            return countZeros(n / 10);
        }
    }
}

int main() {
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}
