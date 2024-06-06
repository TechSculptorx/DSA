#include <iostream>
using namespace std;

int knapsack(int* weight, int* value, int n, int maxWeight) {
	// Write your code here
    // Using dp
    int **dp = new int*[n + 1];
    for (int i = 0; i <= n; i++) {
        dp[i] = new int[maxWeight + 1];
    }

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= maxWeight; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
            } else if (weight[i - 1] <= j) {
                dp[i][j] = max(value[i - 1] + dp[i - 1][j - weight[i - 1]], dp[i - 1][j]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    int ans = dp[n][maxWeight];
    for (int i = 0; i <= n; i++) {
        delete [] dp[i];
    }
    delete [] dp;

    return ans;
}

int knapsack(int *weights, int *values, int n, int maxWeight)
{
	//write your code here
    int **dp = new int*[n+1];
    for(int i=0;i<=n;i++){
        dp[i] = new int[maxWeight+1];
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=maxWeight;j++){
            if(i==0 || j==0){
                dp[i][j] = 0;
            }
            else if(weights[i-1]<=j){
                dp[i][j] = max(values[i-1]+dp[i-1][j-weights[i-1]],dp[i-1][j]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    int ans = dp[n][maxWeight];
    for(int i=0;i<=n;i++){
        delete[] dp[i];
    }
    delete[] dp;
    return ans;
}

int main()
{
	int n;
	cin >> n;

	int *weights = new int[n];
	int *values = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> weights[i];
	}

	for (int i = 0; i < n; i++)
	{
		cin >> values[i];
	}

	int maxWeight;
	cin >> maxWeight;

	cout << knapsack(weights, values, n, maxWeight) << endl;

	delete[] weights;
	delete[] values;
}
