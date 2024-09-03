#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector <int> result;
        // for (int i = 0; i < nums.size(); i++) {
        //     for (int j = i+1; j < nums.size(); j++) {
        //         if (nums[i] + nums[j] == target) {
        //             result.push_back(i);
        //             result.push_back(j);
        //             return result;
        //         }
        //     }
        // }

        // Using recursion
        vector <int> result;

        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            vector<int>::iterator it = find(nums.begin() + i + 1, nums.end(), diff);
            if (it != nums.end()) {
                result.push_back(i);
                result.push_back(it - nums.begin());
                return result;
            }
        }
    }
};
