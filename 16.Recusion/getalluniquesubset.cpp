#include <bits/stdc++.h>

using namespace std;
using ll = long long;


// Helper function to generate subsets
void generateSubsets(vector<int>& arr, int index, vector<int>& subset, vector<vector<int>>& result) {
    result.push_back(subset); // Add the current subset to the result
    for (int i = index; i < arr.size(); ++i) {
        if (i > index && arr[i] == arr[i - 1]) continue; // Skip duplicates
        subset.push_back(arr[i]);
        generateSubsets(arr, i + 1, subset, result);
        subset.pop_back(); // Backtrack
    }
}

vector<vector<int>> getUniqueSubsets(vector<int>& arr) {
    vector<vector<int>> result;
    vector<int> subset;
    sort(arr.begin(), arr.end()); // Sort the array to handle duplicates
    generateSubsets(arr, 0, subset, result);
    return result;
}


class Runner
{
    vector<int> arr;
    int n;
public:
    void takeInput()
    {
        cin >> n;
        arr.assign(n, 0);
        for(int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
    }
    void execute()
    {
        getUniqueSubsets(arr);
    }

    void executeAndPrintOutput()
    {
        auto c = getUniqueSubsets(arr);
        sort(c.begin(), c.end());

        for(auto val : c) {
            for(auto vall : val) cout << vall << ' ';
            cout << '\n';
        }
    }
};

int main()
{
    Runner runner;
    runner.takeInput();
    runner.executeAndPrintOutput();

    return 0;
}
