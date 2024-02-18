#include <iostream>
#include <cstring>
#include<string>
using namespace std;

string getCompressedString(string &input) {
    string ans = "";
    char currentChar = input[0];
    int currentLenght = 1;

    for (int i = 1; i < input.size() - 1; i++) {
        if (input[i] == currentChar) {
            currentLenght++;
        } else {
            ans += currentChar;

            if (currentLenght != 1) {
                ans += to_string(currentLenght);
            }

            currentChar = input[i];
            currentLenght = 1;
        }
    }
}

int main() {
    int size = 1e6;
    string str;
    cin >> str;
    str = getCompressedString(str);
    cout << str << endl;
}
