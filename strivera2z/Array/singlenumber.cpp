#include <iostream>
using namespace std;
#include <vector>

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for (int i = 0; i < nums.size(); i++) {
            cout << res << " " << nums[i] << endl;
            res ^= nums[i];
        }

        return res;
    }
};

int main () {
    Solution sol;
    vector<int> nums = {4,1,2,1,2};
    cout << sol.singleNumber(nums) << endl;
    return 0;
}
