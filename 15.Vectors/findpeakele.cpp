#include <algorithm>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

int findPeakElement(vector<int> &arr) {
    int n = arr.size();
    int low = 0, high = n - 1;
    while (low < high) {
        int mid = low + (high - low) / 2;
        if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == n - 1 || arr[mid + 1] <= arr[mid]))
            return mid;
        if (mid > 0 && arr[mid - 1] >= arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}


class Runner {
    vector<int> v;

public:
    void takeInput() {
        int n;
        cin >> n;
        v.resize(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
    }

    void execute() {
        vector<int> temp = v;
        int ans = findPeakElement(temp);
    }

    void executeAndPrintOutput() {
        vector<int> temp = v;
        int ans = findPeakElement(temp);
        if (ans >= 0 && ans < v.size() && get(ans - 1) < get(ans) && get(ans) > get(ans + 1))
            cout << "True\n";
        else
            cout << "False\n";
    }

    int get(int i) {
        if (i < 0)
            return -100;
        if (i >= v.size())
            return -100;
        return v[i];
    }
};

int main() {
    // freopen("./Testcases/large/in/input.txt", "r", stdin);
    // freopen("./Testcases/large/out/output.txt", "w", stdout);
    Runner runner;
    runner.takeInput();
    runner.executeAndPrintOutput();
    return 0;
}
