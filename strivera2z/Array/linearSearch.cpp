#include <iostream>
using namespace std;
#include <vector>

class Solution {
    public :
        int Search(vector<int> &arr, int target) {
            int j = -1;
            for (int i = 0; i < arr.size(); i++) {
                if (arr[i] == target) {
                    j = i;
                    break;
                }
            }

            return j;
        }
};

int main () {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    Solution obj;

    cout << obj.Search(arr, target) << endl;
}
