#include <bits/stdc++.h>
using namespace std;

int minCostPathDp (int **input, int m, int n) {
    int **output = new int*[m];
    for (int i = 0; i < m; i++) {
        output[i] = new int[n];
    }

    output[m-1][n-1] = input[m-1][n-1];

    // Fill last row right to left
    for (int j = n-2; j >= 0; j--) {
        output[m-1][j] = input[m-1][j] + output[m-1][j+1];
    }

    // Fill last column bottom to top
    for (int i = m-2; i >= 0; i--) {
        output[i][n-1] = input[i][n-1] + output[i+1][n-1];
    }

    // Fill remaining cells
    for (int i = m-2; i >= 0; i--) {
        for (int j = n-2; j >= 0; j--) {
            output[i][j] = input[i][j] + min(output[i][j+1], min(output[i+1][j], output[i+1][j+1]));
        }
    }

    return output[0][0];
}

int minCostPathMemo (int **input, int m, int n, int i, int j, int **output){
    if (i == m-1 && j == n-1) {
        return input[i][j];
    }

    if (i >= m || j >= n) {
        return INT_MAX;
    }

    if (output[i][j] != -1) {
        return output[i][j];
    }

    int x = minCostPathMemo(input, m, n, i, j+1, output);
    int y = minCostPathMemo(input, m, n, i+1, j, output);
    int z = minCostPathMemo(input, m, n, i+1, j+1, output);

    output[i][j] = input[i][j] + min(x, min(y, z));
    return output[i][j];
}

int minCostPath(int **input, int m, int n, int i, int j) {
    if (i == m-1 && j == n-1) {
        return input[i][j];
    }

    if (i >= m || j >= n) {
        return INT_MAX;
    }

    int x = minCostPath(input, m, n, i, j+1);
    int y = minCostPath(input, m, n, i+1, j);
    int z = minCostPath(input, m, n, i+1, j+1);

    return input[i][j] + min(x, min(y, z));
}

int minCostPath(int **input, int m, int n)
{
	//Write your code here
    int **output = new int*[m];
    for (int i = 0; i < m; i++) {
        output[i] = new int[n];
        for (int j = 0; j < n; j++) {
            output[i][j] = -1;
        }
    }

    return minCostPathMemo(input, m, n, 0, 0, output);
}

int main()
{
	int **arr, n, m;
	cin >> n >> m;
	arr = new int *[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[m];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
	cout << minCostPath(arr, n, m) << endl;
}
