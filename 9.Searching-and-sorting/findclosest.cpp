#include<iostream>
using namespace std;

int binarySearchClosest(int arr[], int left, int right, int target)
{
  /*
    int low = left;
    int high = right;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }


    if (low > 0 && (low == right || abs(arr[low - 1] - target) < abs(arr[low] - target))) {
        return low - 1;
    } else {
        return low;
    }
  */

 while (left + 1 < right) {
  int mid = (left + right) / 2;

  if (arr[mid] == target) {
    return mid;
  } else if (arr[mid] < target) {
    left = mid;
  } else {
    right = mid;
  }
 }

  if (arr[right] - target < target - arr[left]) {
    return right;
  } else {
    return left; 
  }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int left = 0;
    int right =n-1;
    int target;
    cin>>target;
    int ans = binarySearchClosest(arr, 0, n-1, target);
    cout<<ans;
    return 0;
}
