#include <bits/stdc++.h>
using namespace std;

// Using dynamic programming

int countMinStepsToOne(int n)
{
    //Write your code here
    int *dp = new int[n+1];

    dp[1] = 0;

    for (int i = 2; i <= n; i++) {
        int x = dp[i-1];
        int y = INT_MAX;
        int z = INT_MAX;

        if (i % 2 == 0) {
            y = dp[i/2];
        }

        if (i % 3 == 0) {
            z = dp[i/3];
        }

        dp[i] = 1 + min(x, min(y, z));
    }

    return dp[n];
}

int coutnMinStepsToOneHelper(int n, int *dp) {
    if (n == 1) {
        return 0;
    }

    if (dp[n] != -1) {
        return dp[n];
    }

    int x = coutnMinStepsToOneHelper(n-1, dp);
    int y = INT_MAX;
    int z = INT_MAX;

    if (n % 2 == 0) {
        y = coutnMinStepsToOneHelper(n/2, dp);
    }

    if (n % 3 == 0) {
        z = coutnMinStepsToOneHelper(n/3, dp);
    }

    int output = 1 + min(x, min(y, z));
    dp[n] = output;
    return output;
}

int countMinStepsToOne(int n)
{
	//Write your code here
    int *dp = new int[n+1];

    for (int i = 0; i <= n; i++)
    {
        dp[i] = -1;
    }

    coutnMinStepsToOneHelper(n, dp);
}

int main()
{
	int n;
	cin >> n;
	cout << countMinStepsToOne(n);
}
