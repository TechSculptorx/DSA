#include <iostream>
#include <string>
using namespace std;
#include "StackUsingArray.cpp"

bool isBalanced(string expression)
{
    StackUsingArray<char> s;

    for (int i = 0; i < expression.length(); i++)
    {
        if (expression[i] == '(' || expression[i] == '{' || expression[i] == '[')
        {
            s.push(expression[i]);
        }
        else if (expression[i] == ')')
        {
            if (s.isEmpty() || s.top() != '(')
            {
                return false;
            }
            s.pop();
        }
        else if (expression[i] == '}')
        {
            if (s.isEmpty() || s.top() != '{')
            {
                return false;
            }
            s.pop();
        }
        else if (expression[i] == ']')
        {
            if (s.isEmpty() || s.top() != '[')
            {
                return false;
            }
            s.pop();
        }
    }

    return s.isEmpty();
}

int main()
{
    string input;
    cin >> input;
    cout << ((isBalanced(input)) ? "true" : "false");
}
