#include<iostream>
using namespace std;

int findDuplicate(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    int key = arr[i];

    for (int j = i + 1; j < n; j++) {
      if (arr[j] == key) {
        return key;
      }
    }
  }
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
    int ans = findDuplicate(arr, n);
    cout<<ans;
    return 0;
}
