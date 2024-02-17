#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
using namespace std;

void printSubstrings(string input) {
    for (int i = 0; i < input.length(); i++) {
        for (int j = i; j < input.length(); j++) {
            for (int k = i; k <= j; k++) {
                cout << input[k];
            }
            cout << endl;
        }
    }
}

int main() {
    string input;
    getline(cin, input);
    printSubstrings(input);
    return 0;
}
