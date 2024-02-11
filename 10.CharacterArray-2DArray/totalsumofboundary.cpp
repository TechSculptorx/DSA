#include <iostream>
using namespace std;

int totalSum(int input[][501], int n) {
  int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += input[0][i];
        sum += input[n - 1][i];
    }

    for (int i = 1; i < n - 1; i++) {
        sum += input[i][0];
        sum += input[i][n - 1];
    }

     for (int i = 1; i < n - 1; i++) {
        sum += input[i][i];
        sum += input[i][n - 1 - i];
    }

    if (n % 2 != 0) {
        sum -= input[n/2][n/2];
    }

    return sum;
}

int main()
{

		int n;
		cin >> n;
		int arr[501][501];

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> arr[i][j];
			}
		}

        cout << totalSum(arr, n) << endl;

}
