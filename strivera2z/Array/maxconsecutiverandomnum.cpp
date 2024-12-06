#include <iostream>
using namespace std;
#include <vector>
#include <unordered_set>

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet;
        for (int num : nums) {
            numSet.insert(num);
        }

        int longestStreak = 0;

        for (int num : numSet) {
            if (numSet.find(num - 1) == numSet.end()) {
                int currentNum = num;
                int currentStreak = 1;

                while (numSet.find(currentNum + 1) != numSet.end()) {
                    currentNum += 1;
                    currentStreak += 1;
                }

                longestStreak = max(longestStreak, currentStreak);
            }
        }

        return longestStreak;

        // Alternate solution

        // if (nums.empty()) return 0;

        // sort(nums.begin(), nums.end());
        // int longest = 1, current = 1;

        // for (int i = 1; i < nums.size(); i++) {
        //     if (nums[i] == nums[i - 1]) continue;  // Skip duplicates
        //     else if (nums[i] == nums[i - 1] + 1) current++;  // Extend the sequence
        //     else {
        //         longest = max(longest, current);
        //         current = 1;  // Reset sequence count
        //     }
        // }

        // return max(longest, current);  // Final check
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
    cout << sol.longestConsecutive(nums) << endl;
    return 0;
}
