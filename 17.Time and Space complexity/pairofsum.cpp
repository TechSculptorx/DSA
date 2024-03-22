#include <iostream>
using namespace std;

int pairSum(int A[], int size, int K)
{
     // Write your code here.
    int ans = 0;
    int i = 0;
    int j = size-1;

    while (i < j) {
        if (A[i] + A[j] == k) {
            ans++;
            i++;
            j--;;
        } else if (A[i] + A[j] < k) {
            i++;
        } else {
            j--;
        }
    }

}

int main()
{
    int n;
    cin>>n;
    int input[n];
    for(int i=0;i<n;i++)
    {
        cin>>input[i];
    }
    int k;
    cin>>k;
    int ans = pairSum(input, n, k);
    cout<<ans;
    return 0;
}
