#include <iostream>
using namespace std;
#include <vector>

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0) {
                neg.push_back(nums[i]);
            } else {
                pos.push_back(nums[i]);
            }
        }

        vector<int> result;
        int i = 0, j = 0;
        while (i < pos.size() && j < neg.size()) {
            result.push_back(pos[i]);
            result.push_back(neg[j]);
            i++;
            j++;
        }

        while (i < pos.size()) {
            result.push_back(pos[i]);
            i++;
        }

        while (j < neg.size()) {
            result.push_back(neg[j]);
            j++;
        }

        return result;
    }
};

int main () {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    Solution obj;
    vector<int> result = obj.rearrangeArray(nums);
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    return 0;
}
