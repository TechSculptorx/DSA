#include<iostream>
using namespace std;

int kthSmallest(int arr[], int n, int k) {
  int kth_smallest = 0;

  for (int i = 0; i < k; i++) {
    int min = arr[i];
    int minIndex = i;

    for (int j = i + 1; j < n; j++) {
      if(arr[j] < min) {
        min = arr[j];
        minIndex = j;
      }
    }

    int temp = arr[i];
    arr[i] = arr[minIndex];
    arr[minIndex] = temp;
    kth_smallest = min;
  }

  return kth_smallest;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int kth_smallest = kthSmallest(arr, n, k);
    cout << kth_smallest << endl;
    return 0;
}
