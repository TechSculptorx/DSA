#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
    string s;
    getline(cin, s);


    int n = s.length();
    string s1 = "";

    for (int i = 0; i < n; i++) {
        if (s[i] == ' ') {
            reverse(s1.begin(), s1.end());
            cout << s1 << " ";
            s1 = "";
        } else {
            s1.push_back(s[i]);
        }
    }

    if (s1 != "") {
        reverse(s1.begin(), s1.end());
        cout << s1 << " ";
    }
}
