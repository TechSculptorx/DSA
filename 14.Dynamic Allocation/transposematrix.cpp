#include <iostream>
using namespace std;

int main () {
   int test ;
	cin >> test;

	while (test > 0) {
		int n,m;
    	cin >> n >> m;

    	int **a = new int*[n];

    	for (int i = 0; i < n; i++) {
        	a[i] = new int[m];

        	for (int j = 0; j < m; j++) {
        	    cin >> a[i][j];
       		 }
    	}

		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				cout << a[j][i] << " ";
			}
			cout << endl;
		}

		test--;
	}
}
