#include <bits/stdc++.h>
using namespace std;

int minCount(int n)
{
	//Write your code here
    // Using Dynamic Programming
    int *dp = new int[n+1];

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;

    for(int i = 4; i <= n; i++)
    {
        dp[i] = i;
        for(int j = 1; j <= i/2; j++)
        {
            int temp = j*j;
            if(temp > i)
                break;
            else
                dp[i] = min(dp[i], 1 + dp[i - temp]);
        }
    }

    int ans = dp[n];
}

int main()
{
	int n;
	cin >> n;
	cout << minCount(n);
}
