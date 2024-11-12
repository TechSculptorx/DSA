#include <iostream>
using namespace std;
#include <vector>

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int small = a[0];
    int large = a[0];
    int secondSmall = INT_MAX;
    int secondLarge = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (a[i] < small) {
            secondSmall = small;
            small = a[i];
        } else if (a[i] < secondSmall && a[i] != small) {
            secondSmall = a[i];
        }

        if (a[i] > large) {
            secondLarge = large;
            large = a[i];
        } else if (a[i] > secondLarge && a[i] != large) {
            secondLarge = a[i];
        }
    }

    vector<int> result;
    result.push_back(secondLarge);
    result.push_back(secondSmall);

    return result;
}


int main () {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> result = getSecondOrderElements(n, a);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
