#include <iostream>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

bool **dp;

void display(const vector<int> &v)
{
    for (int i = v.size() - 1; i >= 0; i--)
        cout << v[i] << " ";
    cout << "\n";
}

void printSubsetsRec(int arr[], int i, int sum, vector<int> &p)
{
    if (i == 0 && sum != 0 && dp[0][sum])
    {
        p.push_back(arr[i]);
        if (arr[i] == sum)
            display(p);
        return;
    }

    if (i == 0 && sum == 0)
    {
        display(p);
        return;
    }

    if (dp[i - 1][sum])
    {
        vector<int> b = p;
        printSubsetsRec(arr, i - 1, sum, b);
    }

    if (sum >= arr[i] && dp[i - 1][sum - arr[i]])
    {
        p.push_back(arr[i]);
        printSubsetsRec(arr, i - 1, sum - arr[i], p);
    }
}

void printSubsetSumToK(int arr[], int n, int sum)
{
    if (n == 0 || sum < 0)
        return;

    dp = new bool *[n];
    for (int i = 0; i < n; ++i)
    {
        dp[i] = new bool[sum + 1];
        dp[i][0] = true;
    }

    if (arr[0] <= sum)
        dp[0][arr[0]] = true;

    for (int i = 1; i < n; ++i)
        for (int j = 0; j < sum + 1; ++j)
            dp[i][j] = (arr[i] <= j) ? dp[i - 1][j] || dp[i - 1][j - arr[i]] : dp[i - 1][j];
    if (dp[n - 1][sum] == false)
    {
        cout << " ";
        return;
    }
    vector<int> p;
    printSubsetsRec(arr, n - 1, sum, p);
}

int main() {
  int input[1000],length,k;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  cin>>k;
  printSubsetSumToK(input, length,k);
}
