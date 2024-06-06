#include <iostream>
using namespace std;

#include<vector>
int findMaxSquareWithAllZeros(int **arr, int n, int m) {
	//Write your code here
    vector<vector<int>> dp(n, vector<int>(m));
    int answer = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(arr[i][j] == 0) {
                dp[i][j] = 1;
            	if(i > 0 and j > 0) {
                	dp[i][j] += min(dp[i - 1][j], min(dp[i][j - 1], dp[i - 1][j - 1]));
            	}
            	answer = max(answer, dp[i][j]);
            }
        }
    }

    return answer;
}

int main()
{
	int **arr, n, m, i, j;
	cin >> n >> m;
	arr = new int *[n];

	for (i = 0; i < n; i++)
	{
		arr[i] = new int[m];
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}

	cout << findMaxSquareWithAllZeros(arr, n, m) << endl;

	delete[] arr;

	return 0;
}
