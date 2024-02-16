#include <cstdlib>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

int last(string s) {
    if (s.size() == 0) {
        return 0;
    }

    if (s.back() == '0') {
        return 0;
    } else {
        return 1;
    }
}

void remove(string &s) {
    if (s.size() == 0) {
        s.pop_back();
    }
}

string addBinaryString(string &a, string &b, int n, int m) {
    // Write your code here.
    int c = 0;
    string ans = "";
    int s1 = a.size();
    int s2 = b.size();


    while (s1 > 0 || s2 > 0) {
        int sum = last(a) + last(b) + c;
        int d = sum % 2;
        c = sum / 2;

        d == 0 ? ans.push_back('0') : ans.push_back('1');

        ans.push_back(d);
        remove(a);
        remove(b);
    }

    if (c > 0) {
        c == 0 ? ans.push_back('0') : ans.push_back('1');
    }

    while (ans.size() > 0) {
        cout << ans.back();
        ans.pop_back();
    }
}

class Runner
{
    int t;
    vector<pair<string, string>> binaryString;
    vector<pair<int, int>> stringLength;

public:
    void takeInput()
    {
        cin >> t;

        binaryString.resize(t);
        stringLength.resize(t);

        for (int l = 0; l < t; l++)
        {
            cin >> stringLength[l].first >> stringLength[l].second;

            cin >> binaryString[l].first >> binaryString[l].second;
        }
    }

    void execute()
    {
        for (int i = 0; i < t; i++)
        {
            string a = binaryString[i].first;
            string b = binaryString[i].second;
            int n = stringLength[i].first;
            int m = stringLength[i].second;

            addBinaryString(a, b, n, m);
        }
    }

    void executeAndPrintOutput()
    {
        for (int i = 0; i < t; i++)
        {
            string a = binaryString[i].first;
            string b = binaryString[i].second;
            int n = stringLength[i].first;
            int m = stringLength[i].second;

            cout << addBinaryString(a, b, n, m) << endl;
        }
    }
};

int main()
{
    Runner runner;
    runner.takeInput();
    runner.executeAndPrintOutput();

    return 0;
}
