#include <iostream>
using namespace std;

void removeX(char str[]) {
    if (str[0] == '\0') {
        return;
    }

    if (str[0] != 'x') {
        cout << str[0];
    }

    removeX(str + 1);
}

int main () {
    char str[100];
    cin >> str;

    removeX(str);
}
