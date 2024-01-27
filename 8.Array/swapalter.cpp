#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size) {
  int i = 0;
  int j = 1;

  while (i < size && j < size) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;

    i += 2;
    j += 2;
  }
}

int main()
{

		int size;
		cin >> size;
		int arr[size];
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}
		swapAlternate(arr, size);
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;

}
