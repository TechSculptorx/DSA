#include <iostream>
using namespace std;

void modify(int *ar,int n)
{
    int *min = ar;
    int *max = ar;

    for (int i = 1; i < n; i++) {
        if (ar[i] < *min) {
            min = &ar[i];
        }
        if (ar[i] > *max) {
            max = &ar[i];
        }
    }

    *min = 0;
    *max = 100;
}

int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    modify(ar,n);
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}
