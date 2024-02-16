#include <iostream>
#include <string>
using namespace std;

int countWords(string str) {
	// Write your code here
    int count = 1;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ' ') {
            count++;
        }
    }
    return count;
}

int main() {
    string str;
    getline(cin, str);
    cout << countWords(str);
}
