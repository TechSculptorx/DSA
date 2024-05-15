#include <iostream>
using namespace std;

bool isMaxHeap(int arr[], int n) {
    // Write your code here
    for(int i=0;i<n;i++){
        if(2*i+1<n && arr[i]<arr[2*i+1]){
            return false;
        }
        if(2*i+2<n && arr[i]<arr[2*i+2]){
            return false;
        }
    }
}

int main() {
    int n;
    cin >> n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << (isMaxHeap(arr, n) ? "true\n" : "false\n");

    delete[] arr;
}
