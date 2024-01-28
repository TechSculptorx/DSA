#include <iostream>
using namespace std;

void arrange(int arr[], int n) {
  int i = 0;
  int j = n - 1;
  int k = 1;

  while (i <= j) {
    arr[i] = k;
    i++;
    k++;

    if (i <= j) {
      arr[j] = k;
      j--;
      k++;
    }

  }
}

int main()
{

		int n;
		cin >> n;

		int arr[n];
		arrange(arr, n);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
}
