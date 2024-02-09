#include <iostream>
using namespace std;
#include<climits>

int findLargest(int input[][1001], int nRows, int mCols) {

  if (nRows == 0) {
    return 0;
  }

  int maxRowSum = INT_MIN;
  int maxRow = -1;
  for (int i = 0; i < nRows; i++) {
    int sum = 0;
    for (int j = 0; j < mCols; j++) {
      sum += input[i][j];
    }
    if (sum > maxRowSum) {
      maxRowSum = sum;
      maxRow = i;
    }
  }

  int maxColSum = INT_MIN;
  int maxCol = -1;
  for (int i = 0; i < mCols; i++) {
    int sum = 0;
    for (int j = 0; j < nRows; j++) {
      sum += input[j][i];
    }
    if (sum > maxColSum) {
      maxColSum = sum;
      maxCol = i;
    }
  }

  if (maxRowSum > maxColSum) {
    return maxRowSum;
  }
  return maxColSum;
}

int main()
{

		int row, col;
		cin >> row >> col;
		int input[row][1001];
		for (int i = 0; i < row; i++)
		{

			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}


		cout << findLargest(input, row, col)<<endl;

}
