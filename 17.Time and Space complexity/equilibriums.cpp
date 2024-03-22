#include <iostream>
using namespace std;

int findEquilibriumIndex(int *arr, int n)
{

    if (n == 1)
        return -1;


    //Write your code here
    int leftSum = 0;
    int rightSum = 0;

    for (int i = 1; i < n; i++)
    {
        rightSum += arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (leftSum == rightSum)
            return i;

        if (i < n - 1)
        {
            leftSum += arr[i];
            rightSum -= arr[i + 1];
        }
    }

    return -1;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << findEquilibriumIndex(input, size) << endl;

		delete[] input;
	}
	return 0;
}
