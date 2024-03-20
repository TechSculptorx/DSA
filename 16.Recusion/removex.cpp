#include <iostream>
using namespace std;

void removeX(char input[]) {
    // Write your code here

    if (input[0] == '\0') {
        return;
    }

    if (input[0] != 'x') {
        removeX(input + 1);
    } else {
        int count = 0;
        for (int i = 0; input[i] != '\0'; i++) {
            count++;
        }
        for (int i = 0; i < count; i++) {
            input[i] = input[i + 1];
        }
        removeX(input);
    }
}

int main() {
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}
