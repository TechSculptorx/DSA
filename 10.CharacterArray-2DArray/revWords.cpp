#include <iostream>
#include <cstring>
using namespace std;

void reverseEachWord(char input[]) {
    // Write your code here
    int start = 0;
    for (int i = 0; i <= strlen(input); i++) {
        if (input[i] == ' ' || input[i] == '\0') {
            int end = i - 1;
            while (start < end) {
                char temp = input[start];
                input[start] = input[end];
                input[end] = temp;
                start++;
                end--;
            }
            start = i + 1;
        }
    }
}

int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    reverseEachWord(str);
    cout << str;
}
