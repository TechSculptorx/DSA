#include <iostream>
#include <vector>

using namespace std;

vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
    vector<int> result;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    result.push_back(arr[k - 1]);
    result.push_back(arr[n - k]);
    return result;
}

class Runner
{
    int t;
    vector<vector<int>> arrs;
    vector<int> ns, ks;

public:
    void takeInput()
    {
        cin >> t;
        for (int i = 0; i < t; i++)
        {
            int n, k;
            cin >> n >> k;

            vector<int> arr(n);
            for(int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }

            ns.push_back(n);
            ks.push_back(k);
            arrs.push_back(arr);
        }
    }

    void execute()
    {
        vector<vector<int>> arrsCopy = arrs;
        vector<int> nsCopy = ns;
        vector<int> ksCopy = ks;
        for (int i = 0; i < t; i++)
        {
            vector<int> result = kthSmallLarge(arrsCopy[i], nsCopy[i], ksCopy[i]);
        }
    }

    void executeAndPrintOutput()
    {
        for (int i = 0; i < t; i++)
        {
            vector<int> result = kthSmallLarge(arrs[i], ns[i], ks[i]);
            cout << result[0] << ' ' << result[1] << '\n';
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
