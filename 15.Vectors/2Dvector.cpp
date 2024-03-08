#include <iostream>
#include <vector>
using namespace std;

int main () {
    int row, col;
    cin >> row >> col;

    vector<vector<int>> vec(row, vector<int>(col));

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> vec[i][j];
        }
    }

    // Row wise print
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    // Column wise print
    for (int j = 0; j < col; j++) {
        for (int i = 0; i < row; i++) {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    // Sum of each row
    for (int i = 0; i < row; i++) {
        int sum = 0;
        for (int j = 0; j < col; j++) {
            sum += vec[i][j];
        }
        cout << "Sum of row " << i << " is " << sum << endl;
    }
}
