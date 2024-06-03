#include <iostream>
#include <vector>
using namespace std;

void addSolution(int n, vector<vector<int>> &ans, vector<int> &col) {
    vector<int> currentAns;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (col[i] == j) {
                currentAns.push_back(1);
            } else {
                currentAns.push_back(0);
            }
        }
    }

    ans.push_back(currentAns);
}

void solve(int row, int n, vector<vector<int>> &ans, vector<int> &col, vector<int> &d1, vector<int> &d2) {
    if (row ==  n) {
        addSolution(n, ans, col);
        return;
    }

    for (int i = 0; i < n; i++) {
        if ((col[i] == 1) && (d1[row - i + n - 1] == -1) && (d2[row + i] == -1)) {
            col[i] = d1[row - i + n - 1] = d2[row + i] = row;
            solve(row + 1, n, ans, col, d1, d2);
            col[i] = d1[row - i + n - 1] = d2[row + i] = -1;
        }
    }

    return;
}

vector<vector<int>> solveNQueens(int n) {
    vector<vector<int>> ans;
    vector<int> col(30, -1), d1(30, -1), d2(30, -1);

    solve(0, n, ans, col, d1, d2);

    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> answer;
    answer = solveNQueens(n);

    for (auto sol : answer) {
        for (auto i : sol) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
