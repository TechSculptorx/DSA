#include <iostream>
#include <string>
using namespace std;

#include <stack>

bool checkRedundantBrackets(string expression) {
	// Write your code here
	stack<char> s;
    int i = 0, j = 0;
    int count = 0;
    while (expression[i] != '\0')
    {
        while (expression[i] != ')')
        {
            if (expression[i] == '\0')
            {
                return false;
            }
            s.push(expression[i]);
            i++;
        }
        if (expression[i] == ')')
        {
            if (s.empty()) return false;

            while (s.top() != '(')
            {
                s.pop();
                count++;
            }
            if (count == 0 || count == 1)
            {
                return true;
            }
            else
            {
                s.pop();
                count = 0;
            }
        }
        i++;
    }
    return false;
}

int main() {
    string input;
    cin >> input;
    cout << ((checkRedundantBrackets(input)) ? "true" : "false");
}
