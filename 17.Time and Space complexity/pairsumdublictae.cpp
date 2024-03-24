#include <iostream>
#include <algorithm>
using namespace std;

void merge(int *arr, int l, int r) {
    int mid = (l + r) / 2;

    int *temp = new int[r - l + 1];
    int i = l;
    int j = mid + 1;
    int k = 0;

    while (i <= mid && j <= r) {
        if (arr[i] <= arr[j]) {
            temp[k] = arr[i];
            i++;
            k++;
        } else {
            temp[k] = arr[j];
            k++;
            j++;
        }
    }

    while (i <= mid) {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while (j <= r) {
        temp[k] = arr[j];
        j++;
        k++;
    }

    int m = 0;

    while (m < k) {
        arr[l + m] = temp[m];
        m++;
    }
}

void mergeSort (int *arr, int l, int r) {
    if (l >= r) {
        return;
    }

    int mid = (l + r) / 2;

    mergeSort(arr, l, mid);
    mergeSort(arr, mid+1, r);

    merge(arr, l, r);
}

int pairSum(int *arr, int n, int num)
{
	//Write your code here
    mergeSort(arr, 0, n-1);

    int i = 0;
    int j = n-1;
    int count = 0;

    while (i < j) {
        if (arr[i] + arr[j] == num) {
            if (arr[i] == arr[j]) {
                int x = j - i + 1;
                count += (x * (x - 1)) / 2;
                break;
            }

            int x = 1;
            int y = 1;

            while (arr[i] == arr[i+1]) {
                x++;
                i++;
            }

            while (arr[j] == arr[j-1]) {
                y++;
                j--;
            }

            count += x * y;
            i++;
            j--;
        } else if (arr[i] + arr[j] < num) {
            i++;
        } else {
            j--;
        }
    }

    return count;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cin >> x;

		cout << pairSum(input, size, x) << endl;

		delete[] input;
	}

	return 0;
}
