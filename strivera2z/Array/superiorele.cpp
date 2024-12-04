#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    vector<int> result;

    for (int i = a.size() - 1; i >= 0; i--) {
        bool flag = true;
        for (int j = i + 1; j < a.size(); j++) {
            if (a[j] >= a[i]) {
                flag = false;
                break;
            }
        }

        if (flag) {
            result.push_back(a[i]);
        }
    }

    sort(result.begin(), result.end());
    return result;
}

int main () {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> result = superiorElements(a);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}
