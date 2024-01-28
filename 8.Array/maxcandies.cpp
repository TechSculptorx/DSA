#include<iostream>
using namespace std;

void maximum_candy(int n, int arr[],int extraCandies,bool output[]){
    for (int i = 0; i < n; i++) {
      int max = arr[i] + extraCandies;
      for (int j = 0; j < n; j++) {
        if (arr[j] > max) {
          output[i] = false;
          break;
        }
        else{
            output[i] = true;
        }
      }
    }
}

int main(){
    int n,extraCandies;
    cin>>n>>extraCandies;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    bool output[n];

    maximum_candy(n,arr,extraCandies,output);

    for(int i = 0;i<n;i++){
        if(output[i]){
            cout<<"True ";
        }
        else{
            cout<<"False ";
        }
    }
}
