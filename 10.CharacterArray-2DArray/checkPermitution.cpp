#include <iostream>
#include <cstring>
using namespace std;

bool isPermutation(char input1[], char input2[]) {
    int len1 = strlen(input1);
    int len2 = strlen(input2);
    if (len1 != len2) {
        return false;
    }
    int freq[256] = {0};
    for (int i = 0; i < len1; i++) {
        freq[input1[i]]++;
    }
    for (int i = 0; i < len2; i++) {
        freq[input2[i]]--;
    }
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}
