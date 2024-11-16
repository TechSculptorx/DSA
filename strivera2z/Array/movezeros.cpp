#include <iostream>
using namespace std;
#include <vector>

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        int count = 0;

        for (int i = 0; i  < nums.size(); i++) {
            if (nums[i] == 0) {
                count++;
            } else {
                nums[j] = nums[i];
                j++;
            }
        }

        for (int i = j; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};

int main () {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    Solution *obj = new Solution();
    obj->moveZeroes(nums);
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    delete obj;
    return 0;
}
