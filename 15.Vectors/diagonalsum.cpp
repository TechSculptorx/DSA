#include <iostream>
#include <vector>
using namespace std;

int main () {
    int row,col;
    cin >> row >> col;

    vector<vector<int>> vec(row, vector<int>(col));

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> vec[i][j];
        }
    }

    // Sum of left to right
    int sumOfLeft = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i == j) {
                sumOfLeft += vec[i][j];
            }
        }
    }

    // Sum of right
    int sumOfRight = 0;
    for (int i = 0; i < row; i++) {
        sumOfRight += vec[i][col - i - 1];
    }

    int result = sumOfLeft + sumOfRight;

    if (row % 2 != 0) {
        result -= vec[row / 2][row / 2];
    }

    cout <<  result << endl;
}
