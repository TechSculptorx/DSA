#include <iostream>
using namespace std;

void pairStar(char input[]) {
    // Write your code here

    if (input[0] == '\0') {
        return;
    }

    if (input[0] == input[1]) {
        int count = 0;
        for (int i = 0; input[i] != '\0'; i++) {
            count++;
        }
        for (int i = count; i >= 1; i--) {
            input[i + 1] = input[i];
        }
        input[1] = '*';
        pairStar(input + 2);
    } else {
        pairStar(input + 1);
    }
}

int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}
