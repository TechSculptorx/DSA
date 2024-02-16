#include <iostream>
#include <string>
using namespace std;

string removeConsecutiveDuplicates(string str)  {
    //Write your code here
    int n = str.length();
    string ans = "";
    ans.push_back(str[0]);

    int i = 0;
    for(int j = 1; j < n; j++) {
        if(str[i] != str[j]) {
            ans.push_back(str[j]);
            i = j;
        }
    }
    return ans;
}

int main() {

    string s;
    cin >> s;
    s = removeConsecutiveDuplicates(s);
    cout << s;
}
