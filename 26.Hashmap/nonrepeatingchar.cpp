#include <cstdlib>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

#include <bits/stdc++.h>
char firstNonRepeatingCharacter(string str) {
    int count[256] = {0};
    queue<char> q;
    for (int i = 0; i < str.length(); i++) {
        count[str[i]]++;
        q.push(str[i]);
        while (!q.empty()) {
            if (count[q.front()] > 1) {
                q.pop();
            } else {
                cout << q.front() << " ";
                break;
            }
        }
        if (q.empty()) {
            cout << -1 << " ";
        }
    }
    cout << endl;
    return 0;
}


class Runner
{
    int t;


    vector<string> arr;


public:
    void takeInput()
    {

 cin >> t;
        arr.resize(t);


        for (int tc = 0; tc < t; tc++)
        {
       cin>>arr[tc];

        }


    }

    void execute()
    {
         vector<string> arrCopy = arr;
        for (int i=0;i<t;i++){
            firstNonRepeatingCharacter(arrCopy[i]);
        }
    }


    void executeAndPrintOutput()
    {
        for (int tt=0;tt<t;tt++){
            char v=firstNonRepeatingCharacter(arr[tt]);
            {
              cout<<v;
            }
            cout<<"\n";
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
