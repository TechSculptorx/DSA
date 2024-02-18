#include <iostream>
using namespace std;

int main () {
    string text, pattern;
    cin >> text >> pattern;

    int n = text.size();
    int m = pattern.size();

    int l = 0, r = m - 1;

    while (r < n) {
        bool match = true;
        for (int i = 0; i < m; i++) {
            if (text[l + i] != pattern[i]) {
                match = false;
                break;
            }
        }
        if (match) {
            cout << l << " ";
        }
        l++;
        r++;
    }
}
