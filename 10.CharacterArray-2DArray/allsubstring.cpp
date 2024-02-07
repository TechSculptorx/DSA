#include <iostream>
#include <cstring>
using namespace std;

void printSubstrings(char input[]) {
    int length = strlen(input);
    for (int start = 0; start < length; start++) {
        for (int end = start; end < length; end++) {
            for (int i = start; i <= end; i++) {
                cout << input[i];
            }
            cout << endl;
        }
    }
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    printSubstrings(str);
}
