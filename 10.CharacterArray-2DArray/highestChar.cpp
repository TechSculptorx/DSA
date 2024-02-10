#include <iostream>
#include <cstring>
using namespace std;

char highestOccurringChar(char input[]) {
    int freq[256] = {0};
    int max = 0;
    char result;
    for (int i = 0; i < strlen(input); i++) {
        freq[input[i]]++;
        if (freq[input[i]] > max) {
            max = freq[input[i]];
            result = input[i];
        }
    }
    return result;
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}
