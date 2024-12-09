#include <iostream>
using namespace std;
#include <vector>

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++)
                swap(matrix[i][j], matrix[j][i]);
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n/2; j++)
                swap(matrix[i][j], matrix[i][n-j-1]);
        }
    }
};

int main () {
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];
    }
    Solution obj;
    obj.rotate(matrix);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
    return 0;
}
