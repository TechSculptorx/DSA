#include <iostream>
using namespace std;
#include <vector>

vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    int j, k = 0;
    vector < int > result;

    int n;
    if (a.size() >= b.size()) {
        n = a.size();
    } else {
        n = b.size();
    }

    for (int i = 0; i < n; i++) {
        if (j < a.size() && k < b.size()) {
            if (a[j] < b[k]) {
                result.push_back(a[j]);
                j++;
            } else if (a[j] == b[k]) {
                result.push_back(a[j]);
                j++;
                k++;
            } else {
                result.push_back(b[k]);
                k++;
            }
        }
    }

    if (j < a.size()) {
        for (int i = j; i < a.size(); i++) {
            result.push_back(a[i]);
        }
    } else if (k < b.size()) {
        for (int i = k; i < b.size(); i++) {
            result.push_back(b[i]);
        }
    }

    return result;
};

int main () {
    int n, m;
    cin >> n >> m;
    vector < int > a(n), b(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    vector < int > result = sortedArray(a, b);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
