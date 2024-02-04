
#include <bits/stdc++.h>

using namespace std;

long long int floorSqrt(long long int N)
{
    // Write your code here.
    if (N == 0 || N == 1)
    {
        return N;
    }

  long long int low = 2, high = N, mid;

  while (low <= high) {
    mid = (low + high) / 2;

    if (mid <= (N / mid)) {
      low = mid + 1;
    } else {
      high = mid;
    }
  }

  return low - 1;
}

class Runner
{
    int t = 1;

    vector<long long int> allN;

public:
    void takeInput()
    {
        // cin >> t;

        allN.resize(t);

        for (int i = 0; i < t; i++)
        {
            cin >> allN[i];
        }

        return;
    }

    void execute()
    {
        for (int i = 0; i < t; i++)
        {
            long long int copyN = allN[i];

            // Get the answer from scaffold/solution
            int result = floorSqrt(copyN);
        }
    }

    void executeAndPrintOutput()
    {
        for (int i = 0; i < t; i++)
        {
            int result = floorSqrt(allN[i]);
            cout << result ;
            cout << "\n";
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
