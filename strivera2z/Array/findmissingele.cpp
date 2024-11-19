#include <iostream>
using namespace std;
#include <vector>

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i;
        for (i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] == i) {
                    break;
                }
                if (j == nums.size() - 1) {
                    return i;
                }
            }
        }

        return i;
    }
    int AlternateWay (vector<int>& nums) {
        int n = nums.size();
        int total = n * (n + 1) / 2;
        int sum = 0;
        for (int num : nums) {
            sum += num;
        }
        return total - sum;
    }
};

int main () {
    Solution sol;
    vector<int> nums = {3,0,1};
    cout << sol.missingNumber(nums) << endl;
    return 0;
}
