#include<iostream>
#include<fstream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<bits/stdc++.h>
#include <cstring>
using namespace std;

bool dfs(vector<vector<char>>& board, string& word, int x, int y, int index) {
    if (index == word.size()) return true;
    if (x < 0 || y < 0 || x >= board.size() || y >= board[0].size() || board[x][y] != word[index]) return false;

    char temp = board[x][y];
    board[x][y] = '*'; // Mark the cell as visited

    bool found = dfs(board, word, x + 1, y, index + 1) ||
                 dfs(board, word, x - 1, y, index + 1) ||
                 dfs(board, word, x, y + 1, index + 1) ||
                 dfs(board, word, x, y - 1, index + 1);

    board[x][y] = temp; // Unmark the cell

    return found;
}

bool present(vector<vector<char>>& board, string& word, int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (dfs(board, word, i, j, 0)) {
                return true;
            }
        }
    }
    return false;
}

class Runner
{
    string s;
    int n,m;
    vector<vector<char>> mat;

public:

    void takeInput()
    {
        cin >> s >> n >> m;
        mat = vector<vector<char>> (n,vector<char> (m));
        for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin >> mat[i][j];
    }
    void execute()
    {
        // make copy if vector
        auto cmat = mat;
        present(cmat,s,n,m);
    }
    void executeAndPrintOutput()
    {
        auto cmat = mat;
        if(present(cmat,s,n,m))cout << "true";
        else cout << "false";
    }
};

int main()
{
        Runner runner;
        runner.takeInput();
        runner.executeAndPrintOutput();
    return 0;

}
