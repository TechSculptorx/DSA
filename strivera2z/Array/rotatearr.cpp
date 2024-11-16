#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // for (int i = 0; i < k; i++) {
        //     int temp = nums[0];
        //     nums[0] = nums[nums.size()-1];
        //     for (int j = 1; j < nums.size(); j++) {
        //         int temp2 = nums[j];
        //         nums[j] = temp;
        //         temp = temp2;
        //     }
        // }

        // Second approch

        vector<int> temp;

        if (k <= 0) {
            return;
        } else if (nums.size() < k) {
            if (k - nums.size() > 3) {
                for (int i = 0; i < nums.size(); i++) {
                    temp.push_back(nums[i + 1]);
                }

                temp.push_back(nums[0]);

                for (int i = 0; i < nums.size(); i++) {
                    nums[i] = temp[i];
                }
            } else {
                temp.push_back(nums[nums.size() - 1]);

                for (int i = 0; i < nums.size(); i++) {
                    temp.push_back(nums[i]);
                }

                for (int i = 0; i < nums.size(); i++) {
                    nums[i] = temp[i];
                }
            }

            return;
        }

        for (int i = 0; i < k; i++) {
            temp.push_back(nums[nums.size()-k+i]);
        }

        for (int i = 0; i <= nums.size() - k; i++) {
            temp.push_back(nums[i]);
        }

        for (int i = 0; i < nums.size(); i++) {
            nums[i] = temp[i];
        }
    }
};

int main () {
    Solution sol;
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;
    sol.rotate(nums, k);
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}
