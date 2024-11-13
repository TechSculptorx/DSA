#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

class Solution
{
public:
    int isSorted(int n, vector<int> a)
    {
        for (int i = 0; i < n - 1; i++) {
            if (a[i] > a[i + 1]) {
                return 0;
            }
        }
        return 1;
    }

    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        // Check if the array is non-decreasing
        for (int i = 0; i < n - 1; i++)
            if (nums[i] > nums[i + 1])
                count++;

        // Check if the last element is greater than the first element
        if (nums[n - 1] > nums[0])
            count++;

        // If the count of violations is less than or equal to 1, return true
        return count <= 1;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    Solution *obj = new Solution();
    cout << obj->isSorted(n, nums) << endl;
    cout << obj->check(nums) << endl;

    delete obj;
    return 0;
}
