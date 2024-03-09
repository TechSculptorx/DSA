#include <iostream>
#include<fstream>
#include <vector>
#include<string>
#include<cstring>
using namespace std;

#include <bits/stdc++.h>
vector < int > sqsorted(vector < int > & arr) {
    int n = arr.size();
    vector < int > ans(n);

    for (int i = 0; i < n; i++) {
        ans[i] = arr[i] * arr[i];
    }

    sort(ans.begin(), ans.end());
    return ans;
}

class Runner
{
    int t;
    vector<vector<int>> arr;

public:

    void takeInput()
    {
        cin >> t;
        for (int c = 0; c < t; c++)
        {
            int n;
            cin>>n;

            vector<int>temp(n);
            for(int i=0;i<n;i++)
            {
                cin>>temp[i];
            }
            arr.push_back(temp);
        }

    }

    void execute()
    {
        vector<vector<int>> arrCopy = arr;

        for (int i = 0; i < t; i++)
        {
            vector<int> ans = sqsorted(arrCopy[i]);
        }

    }

    void executeAndPrintOutput()
    {
    for (int i = 0; i < t; i++)
        {
            vector<int> ans = sqsorted(arr[i]);
            for(int i=0;i<ans.size();i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
    }

};

int main()
{
   Runner runner;
   runner.takeInput();
   runner.executeAndPrintOutput();

}
