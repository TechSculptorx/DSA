#include<iostream>
using namespace std;

void moveZeroToEnd(int *a, int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            a[count++] = a[i];
        }
    }

    while (count < n) {
        a[count++] = 0;
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    cout << endl;
}

int main() {
    int n, m;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> m;

        int *a = new int[m];

        for (int j = 0; j < m; j++) {
            cin >> a[j];
        }

        moveZeroToEnd(a, m);
    }
}
