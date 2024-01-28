#include <iostream>
using namespace std;

int findUnique(int arr[], int size)
{
  int unique = 0;
  for (int i = 0; i < size; i++)
  {
    unique ^= arr[i];
  }
  return unique;

}

int main()
{


		int size;
		cin >> size;
		int input[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		cout << findUnique(input, size) << endl;


	return 0;
}
