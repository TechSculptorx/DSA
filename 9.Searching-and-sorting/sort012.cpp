
#include<iostream>
using namespace std;

void swapElement(int input[], int i, int minIndex) {
  int temp = input[i];
  input[i] = input[minIndex];
  input[minIndex] = temp;
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

void sort012(int arr[], int n)
{
    //Write your code here
    for (int i = 0; i < n - 1; i++) {
    // First find the smallest element in the array
    int minIndex = minElement(arr, i, n);

    // Swap the smallest element with the first element
    swapElement(arr ,i , minIndex);
    }
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int size;

		cin >> size;
		int arr[size];

		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}

		sort012(arr, size);

		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}


		cout << endl;
	}

	return 0;
}
