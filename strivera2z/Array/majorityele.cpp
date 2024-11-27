#include <iostream>
using namespace std;
#include <cmath>
#include <vector>

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = floor(nums.size() / 2);
        vector<int> unique;

        for (int i = 0; i < nums.size(); i++) {
            if (unique.size() == 0) {
                unique.push_back(nums[i]);
            } else {
                bool found = false;
                for (int j = 0; j < unique.size(); j++) {
                    if (unique[j] == nums[i]) {
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    unique.push_back(nums[i]);
                }
            }
        }

        for (int i = 0; i < unique.size(); i++) {
            int count = 0;
            for (int j = 0; j < nums.size(); j++) {
                if (unique[i] == nums[j]) {
                    count++;
                }
            }
            if (count > size) {
                return unique[i];
            }
        }

        return 0;
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
    cout << sol.majorityElement(nums) << endl;
    return 0;
}
