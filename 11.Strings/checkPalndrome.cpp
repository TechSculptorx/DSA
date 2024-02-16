#include<bits/stdc++.h>
using namespace std;


bool checkPalindrome(string str) {
    int n = str.size();
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main(){
    string a;
    cin>>a;
    cout << (checkPalindrome(a) ? "Palindrome" : "Not a Palindrome");
}
