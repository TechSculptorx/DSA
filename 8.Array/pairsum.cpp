#include<iostream>
using namespace std;

void correspondingPairSum(int arr[],int n,int output[]){
    int i = 0;
    int j = n - 1;

    while (i < j) {
      output[i] = arr[i] + arr[j];
      i++;
      j--;
    }
}


int main(){

    int n;
    cin>>n;
    int arr[2000];
    int output[1000];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    correspondingPairSum(arr,n,output);
    for(int i = 0;i<n/2;i++){

        cout<<output[i];
        if(i!=(n/2)-1){
            cout<<" ";
        }
    }

    return 0;
}
