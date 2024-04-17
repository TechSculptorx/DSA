
#include <iostream>
#include <stack>
using namespace std;

#include <stack>

void calculateSpan(int prices[], int n, int spans[]) {
    //Write your code here
    stack<int> s;
    s.push(0);
    spans[0] = 1;

    for (int i = 1; i < n; i++)
    {
        while (!s.empty() && prices[s.top()] < prices[i])
        {
            s.pop();
        }
        spans[i] = (s.empty()) ? (i + 1) : (i - s.top());
        s.push(i);
    }
}

int main() {
    int n;
    cin >> n;

    int* prices = new int[n];
    for (int i = 0; i < n; i++)
        cin >> prices[i];

    int* spans = new int[n];
    calculateSpan(prices, n, spans);

    for (int i = 0; i < n; i++)
        cout << spans[i] << " ";

    delete[] prices;
    delete[] spans;

    return 0;
}
