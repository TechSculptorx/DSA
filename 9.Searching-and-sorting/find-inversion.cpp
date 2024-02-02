#include<iostream>
using namespace std;

int swapElement(int input[], int i, int minIndex, int n) {
  int temp = input[i];
  n = n + (minIndex - i);
  input[i] = input[minIndex];
  input[minIndex] = temp;

  return n;
}

int minElement(int input[], int i, int n) {
  int min = input[i];
  int minIndex = i;

  for (int j = i + 1; j < n; j++) {
    if (input[j] < min) {
      min = input[j];
      minIndex = j;
    }
  }

  return minIndex;
}

int getInversions(int arr[], int n)
{
  int insertion = 0;

  for (int i = 0; i < n - 1; i++) {
    // First find the smallest element in the array
    int minIndex = minElement(arr, i, n);

    // Swap the smallest element with the first element
    insertion = swapElement(arr ,i , minIndex, insertion);
  }

  return insertion;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
	    cin>>arr[i];
    }
    int ans = getInversions(arr, n);
    cout << ans << endl;
    return 0;
}
