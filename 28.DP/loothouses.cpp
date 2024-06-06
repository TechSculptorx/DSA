#include <iostream>
using namespace std;

int maxMoneyLooted(int *arr, int n)
{
	//Write your code here
    // using dynamic programming

    if(n == 0) return 0;
    if(n == 1) return arr[0];
    if(n == 2) return max(arr[0], arr[1]);

    int *dp = new int[n];
    dp[0] = arr[0];
    dp[1] = max(arr[0], arr[1]);

    for(int i = 2; i < n; i++){
        dp[i] = max(dp[i-1], dp[i-2] + arr[i]);
    }

    int ans = dp[n-1];

    delete[] dp;

    return ans;
}

int main()
{
	int n;
	cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cout << maxMoneyLooted(arr, n);

	delete[] arr;
}
