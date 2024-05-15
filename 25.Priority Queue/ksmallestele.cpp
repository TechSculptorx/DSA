#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> kSmallest(int arr[], int n, int k) {
    // Write your code here
    vector<int> output;
    sort(arr, arr+n);
    for(int i=0; i<k; i++){
        output.push_back(arr[i]);
    }
    return output;
}

int main() {
    int size;
    cin >> size;

    int *input = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> input[i];
    }

    int k;
    cin >> k;

    vector<int> output = kSmallest(input, size, k);
    sort(output.begin(), output.end());

    for (int i = 0; i < output.size(); i++) {
        cout << output[i] << " ";
    }

    delete[] input;
}
