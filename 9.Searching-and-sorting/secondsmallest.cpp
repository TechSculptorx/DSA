
#include <iostream>
using namespace std;

int findSecondLargest(int arr[], int n)
{
  int max = 0;
  for (int i = 0; i < 2; i++) {
    max = arr[i];

    for (int j = i + 1; j < n; j++) {
      if (arr[j] > max) {
        max = arr[j];
        arr[j] = arr[i];
        arr[i] = max;
      }
    }
  }

  return max;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans = findSecondLargest(arr, n);
    cout<<ans;
    return 0;
}
