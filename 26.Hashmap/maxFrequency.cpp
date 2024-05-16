#include <iostream>
using namespace std;

#include <unordered_map>

int highestFrequency(int arr[], int n) {
    // Write your code here
    unordered_map<int, int> freq;
    for (int i = 0; i < n; ++i) {
        freq[arr[i]]++;
    }

    int maxFreq = 0;
    int maxFreqElement = arr[0];
    for (int i = 0; i < n; ++i) {
        if (freq[arr[i]] > maxFreq) {
            maxFreq = freq[arr[i]];
            maxFreqElement = arr[i];
        }
    }

    return maxFreqElement;
}

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << highestFrequency(arr, n);

    delete[] arr;
}
