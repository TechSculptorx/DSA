#include <iostream>
using namespace std;

#include <bits/stdc++.h>
int largestElement(vector<int> &arr, int n) {
    int max = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main () {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << largestElement(arr, n) << endl;
    return 0;
}
