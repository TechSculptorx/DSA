#include <iostream>
#include <cstring>
using namespace std;

void removeConsecutiveDuplicates(char input[]) {
    int len = strlen(input);
    if (len == 0 || len == 1) {
        return;
    }
    int i = 0;
    for (int j = 1; j < len; j++) {
        if (input[i] != input[j]) {
            i++;
            input[i] = input[j];
        }
    }
    input[i + 1] = '\0';
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    removeConsecutiveDuplicates(str);
    cout << str;
}
