#include<bits/stdc++.h>
#include<climits>
using namespace std;

void Leaders(int arr[],int len)
{
    int max=INT_MIN;
    for(int i=len-1;i>=0;i--)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            cout<<max<<" ";
        }
    }
}

int main()
{
    int len;
    cin>>len;
	int arr[len];
	for(int i=0;i<len;i++)
	{
		cin>>arr[i];
	}
	Leaders(arr,len);
}
