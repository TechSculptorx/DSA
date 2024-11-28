#include <iostream>
using namespace std;
#include<algorithm>
#include <vector>

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int max = nums[0];

        // for (int i = 0; i < nums.size(); i++) {
        //     for (int j = i; j < nums.size(); j++) {
        //         int sum = 0;
        //         vector<int> subarr;

        //         for (int k = i; k <= j; k++) {
        //             sum += nums[k];
        //             subarr.push_back(nums[k]);
        //         }

        //         if (sum > max) {
        //             max = sum;
        //         }
        //     }
        // }

        int currentSum = 0;
        int maxSum = INT_MIN;
        for (int num : nums) {
            currentSum += num;
            maxSum = max(maxSum, currentSum);
            if (currentSum < 0) currentSum = 0;
        }

        return maxSum;
        // return max;
    }
};

int main () {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    Solution sol;
    cout << sol.maxSubArray(nums) << endl;
    return 0;
}
