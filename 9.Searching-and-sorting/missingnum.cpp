
#include<iostream>
using namespace std;

int missingNumber(int arr[], int n)
{
    //Write your code here

    for (int i = 0; i < n; i++) {
      int min = arr[i];
      int minIndex = i;

      for (int j = i + 1; j < n; j++) {
        if (arr[j] < min) {
          min = arr[j];
          minIndex = j;
        }
      }

      int temp = arr[i];
      arr[i] = arr[minIndex];
      arr[minIndex] = temp;
    }

    for (int i = 0; i < n; i++) {
      if (arr[i] != i) {
        return i;
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
    int ans = missingNumber(arr, n);
    cout<<ans;
    return 0;
}
