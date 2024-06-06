#include <cstring>
#include <iostream>
using namespace std;

int editDistance(string s1, string s2)
{
	//Write your code here
    // using Memoization
    int m = s1.size();
    int n = s2.size();

    int **dp = new int*[m + 1];
    for (int i = 0; i <= m; i++) {
        dp[i] = new int[n + 1];
        memset(dp[i], -1, sizeof(int) * (n + 1));
    }

    for (int i = 0; i <= m; i++) {
        dp[i][0] = i;
    }

    for (int i = 0; i <= n; i++) {
        dp[0][i] = i;
    }

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (s1[m - i] == s2[n - j]) {
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                dp[i][j] = 1 + min(dp[i - 1][j], min(dp[i][j - 1], dp[i - 1][j - 1]));
            }
        }
    }

    int ans = dp[m][n];
    for (int i = 0; i <= m; i++) {
        delete [] dp[i];
    }
    delete [] dp;

    return ans;
}

int editDistance(string s1, string s2) {
	// Write your code here
    if (s1.size() == 0) {
        return s2.size();
    } else if (s2.size() == 0) {
        return s1.size();
    }

    if (s1[0] == s2[0]) {
        return editDistance(s1.substr(1), s2.substr(1));
    } else {
        int a = 1 + editDistance(s1.substr(1), s2);
        int b = 1 + editDistance(s1, s2.substr(1));
        int c = 1 + editDistance(s1.substr(1), s2.substr(1));

        return min(a, min(b, c));
    }
}

int main() {
    string s1;
    string s2;

    cin >> s1;
    cin >> s2;

    cout << editDistance(s1, s2);
}
