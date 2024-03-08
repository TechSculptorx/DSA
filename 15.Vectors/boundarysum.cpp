#include <iostream>
#include<vector>
using namespace std;

int totalSum(vector<vector<int>> input, int n)
{
    int sumOfLeft = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                sumOfLeft += input[i][j];
            }
        }
    }

    // Sum of right
    int sumOfRight = 0;
    for (int i = 0; i < n; i++) {
        sumOfRight += input[i][n - i - 1];
    }

    int result = sumOfLeft + sumOfRight;

    if (n % 2 != 0) {
        result -= input[n / 2][n / 2];
    }

    int row_col = 0;

    for (int i = 1; i < n - 1; i++) {
        row_col += input[0][i];
        row_col += input[n - 1][i];
        row_col += input[i][0];
        row_col += input[i][n - 1];
    }

    return result + row_col;
}

int main()
{

		int n;
		cin >> n;
		vector<vector<int>> arr(n,vector<int>(n));

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> arr[i][j];
			}
		}

        cout << totalSum(arr, n) << endl;

}
