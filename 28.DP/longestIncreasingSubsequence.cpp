#include <iostream>
using namespace std;

int longestIncreasingSubsequence(int* arr, int n) {
	// Write your code here
    // Using brute force
    if(n == 0) return 0;
    if(n == 1) return 1;

    int* dp = new int[n];
    dp[0] = 1;

    for(int i = 1; i < n; i++){
        dp[i] = 1;
        for(int j = i-1; j >= 0; j--){
            if(arr[j] < arr[i]){
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    int ans = 0;
    for(int i = 0; i < n; i++){
        ans = max(ans, dp[i]);
    }

    delete[] dp;

    return ans;
}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << longestIncreasingSubsequence(arr, n);
}
