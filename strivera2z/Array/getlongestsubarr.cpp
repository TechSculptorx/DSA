#include <iostream>
using namespace std;
#include <vector>

int getLongestSubarray(vector<int>& nums, int k) {
    int ans = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        int sum = 0;

        for (int j = i; j < n; j++) {
            sum += nums[j];

            if (sum == k) {
                ans = max(ans, j - i + 1);
            }
        }
    }

    return ans;
}

int main () {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int k;
    cin >> k;
    cout << getLongestSubarray(nums, k) << endl;
    return 0;
}
