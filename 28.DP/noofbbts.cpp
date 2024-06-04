#include <iostream>
using namespace std;

int balancedBTs(int n) {
    // Write your code here
    // using dynamic programming
    int *output = new int[n+1];

    // base case
    output[0] = 1;
    output[1] = 1;

    int mod = 1000000007;
    for(int i=2; i<=n; i++) {
        long long int x = output[i-1];
        long long int y = output[i-2];

        long long int temp1 = (x*x) % mod;
        long long int temp2 = (2*x*y) % mod;

        output[i] = (temp1 + temp2) % mod;
    }

    int ans = output[n];
    delete [] output;
    return ans;
}

int main() {
    int n;
    cin >> n;
    cout << balancedBTs(n);
}
