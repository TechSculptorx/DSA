#include <iostream>
using namespace std;

void replacePi(char input[]) {
	// Write your code here

    if (input[0] == '\0') {
        return;
    }

    int count = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        count++;
    }

    if (input[0] == 'p' && input[1] == 'i') {
        for (int i = count; i >= 2; i--) {
            input[i + 2] = input[i];
        }
        input[0] = '3';
        input[1] = '.';
        input[2] = '1';
        input[3] = '4';
        replacePi(input + 4);
    } else {
        replacePi(input + 1);
    }
}

int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}
