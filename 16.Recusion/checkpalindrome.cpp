#include <iostream>
using namespace std;

bool checkPalindrome(int arr[], int n) {
    if (n == 0 || n == 1) {
        return true;
    }

    if (arr[0] != arr[n-1]) {
        return false;
    }

    return checkPalindrome(arr+1, n-2);
}

int main () {
    int arr[5] = {1, 2, 3, 2, 1};

    if (checkPalindrome(arr, 5)) {
        cout << "The array is a palindrome" << endl;
    } else {
        cout << "The array is not a palindrome" << endl;
    }
}
