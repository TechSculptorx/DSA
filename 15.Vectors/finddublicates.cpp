#include <iostream>
#include <vector>

using namespace std;

#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
    // Write your code here.
	int size = 0;

    for (int i = 0; i <n; i++) {
        size = max(size, arr[i]);
    };

    vector <int> f(size+1, 0);

    for (int i = 0; i < n; i++) {
        f[arr[i]]++;
    };

    for (int i = 0; i < size+1; i++) {
        if (f[i] > 1) {
            return i;
            break;
        };
    };
}


class Runner
{
    int t;
    vector<vector<int> > arr;

public:
    void takeInput()
    {
        cin >> t;
        for (int c = 0; c < t; c++)
        {
            int n;
            cin >> n;
            vector<int> temp(n);
            for (int i = 0; i < n; i++)
            {
                cin >> temp[i];
            }
            arr.push_back(temp);
        }
    }

    void execute()
    {
        vector<vector<int> > arrCopy = arr;
        for (int i = 0; i < t; i++)
        {
        	int n = arrCopy[i].size();
            int ans = findDuplicate(arrCopy[i], n);
        }
    }

    void executeAndPrintOutput()
    {
        for (int i = 0; i < t; i++)
        {
            int n = arr[i].size();
            int ans = findDuplicate(arr[i], n);
            cout << ans <<endl;
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
