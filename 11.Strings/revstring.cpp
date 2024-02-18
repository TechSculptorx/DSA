#include <iostream>
using namespace std;

string reverseStringWordWise(string input)
{
    string s1 = "";
    string ans = "";
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == ' ')
        {
            ans = s1 + " " + ans;
            s1 = "";
        }
        else
        {
            s1 += input[i];
        }
    }
    ans = s1 + " " + ans;
    return ans;
}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}
