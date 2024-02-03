#include <iostream>
#include <cstring>
using namespace std;

bool checkPalindrome(char str[]) {
    // int len = strlen(str);
    // for (int i = 0; i < len / 2; i++) {
    //     if (str[i] != str[len - i - 1]) {
    //         return false;
    //     }
    // }
    // return true;

    int i = 0;
    int j = strlen(str) - 1;

    char fake[strlen(str)];
    for (int k = 0; k < strlen(str); k++) {
        fake[k] = str[k];
    }

    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }

    for (int k = 0; k < strlen(str); k++) {
        if (fake[k] != str[k]) {
            return false;
        }
    }
    return true;
}


int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}
