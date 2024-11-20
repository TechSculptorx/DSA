#include <iostream>
using namespace std;
#include <vector>

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        // Give me suggestion
        int max = 0;
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                count++;
            } else {
                if (count > max) {
                    max = count;
                }
                count = 0;
            }
        }

        if (count > max) {
            max = count;
        }

        return max;
    }
};

int main () {
    Solution sol;
    vector<int> nums = {1,1,0,1,1,1};
    cout << sol.findMaxConsecutiveOnes(nums) << endl;
    return 0;
}
