#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int kthLargest(vector<int>&arr, int k) {
    // Write your code here
    priority_queue<int> pq;
    for (int i = 0; i < k; i++)
        pq.push(arr[i]);

    while (--k)
        pq.pop();

    return pq.top();
}

class Runner
{
    vector<int> arr;
    int k;

public:
    void takeInput()
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            arr.push_back(x);
        }
        cin>>k;
    }

    void execute()
    {
        vector<int>arrCpy=arr;
        int ans=kthLargest(arrCpy,k);
    }

    void executeAndPrintOutput()
    {
        vector<int>arrCpy=arr;
        int ans=kthLargest(arrCpy,k);
        cout<<ans;
    }
};
int main()
{
    // freopen("./Testcases/large/in/input12.txt", "r", stdin);
    // freopen("./Testcases/large/out/output12.txt", "w", stdout);
    Runner runner;
    runner.takeInput();
    runner.executeAndPrintOutput();

    return 0;
}
