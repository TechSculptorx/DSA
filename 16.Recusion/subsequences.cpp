#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int substring (string input, string output[]) {
    if (input.empty()) {
        output[0] = "";
        return 1;
    }

    string smallString = input.substr(1);
    int smallOutputSize = substring(smallString, output);

    for (int i = 0; i < smallOutputSize; i++) {
        output[i + smallOutputSize] = input[0] + output[i];
    }

    return 2 * smallOutputSize;
}

void subs(string input, string output) {
    if (input.empty()) {
        cout << output << endl;
        return;
    }

    subs(input.substr(1), output);
    subs(input.substr(1), output + input[0]);
}

int main () {
    string input;
    cin >> input;

    int n = input.size();
    int size = pow(2, n);

    string * output = new string[size];
    int count = substring(input, output);

    for (int i = 0; i < count; i++) {
        cout << output[i] << endl;
    }
}
