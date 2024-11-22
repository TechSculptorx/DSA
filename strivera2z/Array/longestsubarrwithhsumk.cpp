#include <iostream>
using namespace std;
#include <vector>

int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int n = a.size();
    int sum = 0;
    int max_len = 0;
    int start = 0;

    for (int i = 0; i < n; i++) {
        sum += a[i];
        while (sum > k) {
            sum -= a[start];
            start++;
        }
        if (sum == k) {
            max_len = max(max_len, i - start + 1);
        }
    }

    return max_len;
}

int main () {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long k;
    cin >> k;
    cout << longestSubarrayWithSumK(a, k) << endl;
    return 0;
}
