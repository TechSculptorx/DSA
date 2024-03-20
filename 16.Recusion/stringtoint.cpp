#include <iostream>
using namespace std;

int stringToNumber(char input[]) {
    // Write your code here

    if (input[0] == '\0') {
        return 0;
    }

    int count = 0;

    for (int i = 0; input[i] != '\0'; i++) {
        count++;
    }

    int num = input[0] - '0';

    for (int i = 1; i < count; i++) {
        num = num * 10 + (input[i] - '0');
    }

    return num;

}

int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}
