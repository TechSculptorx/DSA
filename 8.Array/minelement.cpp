#include <iostream>
#include <climits>
using namespace std;

int main () {
  int n;
  cin >> n;

	int input[100];

	for (int i = 0; i < n; i++) {
		cin >> input[i];
	}

	int small = INT_MAX;
	for (int i = 0; i < n; i++) {
		if (input[i] < small) {
			small = input[i];
		}
	}

	cout << small << endl;
}
