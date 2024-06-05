#include <iostream>
using namespace std;
#include <string>

int lcs_dp (string s1, string s2) {
    int m = s1.size();
    int n = s2.size();
    int **output = new int*[m + 1];

    for (int i = 0; i <= m; i++) {
        output[i] = new int[n + 1];
    }

    // fill first row with 0
    for (int i = 0; i <= n; i++) {
        output[0][i] = 0;
    }

    // fill first column with 0
    for (int i = 1; i <= m; i++) {
        output[i][0] = 0;
    }

    // fill rest of the table
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (s1[m - i] == s2[n - j]) {
                output[i][j] = 1 + output[i - 1][j - 1];
            } else {
                output[i][j] = max(output[i - 1][j], max(output[i][j - 1], output[i - 1][j - 1]));
            }
        }
    }

    return output[m][n];
}

int lcs_memo (string s1, string s2, int **output) {
    int ans;

    if (s1.size() == 0 || s2.size() == 0) {
        return 0;
    }

    // Check if answer already exists
    if (output[s1.size()][s2.size()] != -1) {
        return output[s1.size()][s2.size()];
    }

    // Recursive call
    if (s1[0] == s2[0]) {
        ans = 1 + lcs_memo(s1.substr(1), s2.substr(1), output);
    } else {
        int a = lcs_memo(s1.substr(1), s2, output);
        int b = lcs_memo(s1, s2.substr(1), output);
        int c = lcs_memo(s1.substr(1), s2.substr(1), output);

        ans = max(a, max(b, c));
    }

    // Save answer
    output[s1.size()][s2.size()] = ans;

    return ans;
}

int lcs (string s1, string s2) {
    // Base case
    if (s1.size() == 0 || s2.size() == 0) {
        return 0;
    }

    // Recursive call
    if (s1[0] == s2[0]) {
        return 1 + lcs(s1.substr(1), s2.substr(1));
    } else {
        int a = lcs(s1.substr(1), s2);
        int b = lcs(s1, s2.substr(1));
        int c = lcs(s1.substr(1), s2.substr(1));

        return max(a, max(b, c));
    }
}

int main () {
    string s1, s2;
    cin >> s1 >> s2;

    int **output = new int*[s1.size() + 1];
    for (int i = 0; i <= s1.size(); i++) {
        output[i] = new int[s2.size() + 1];
        for (int j = 0; j <= s2.size(); j++) {
            output[i][j] = -1;
        }
    }

    cout << lcs_memo(s1, s2, output) << endl;

    cout << lcs(s1, s2) << endl;
}
