#include<iostream>
using namespace std;

void transpose(int row,int col,int input[][1001]) {
    for(int i = 0;i<col;i++){
        for(int j = 0;j<row;j++){
            cout<<input[j][i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int row,col;
    cin>>row>>col;
    int input[row][1001];

    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){

            cin>>input[i][j];
        }
    }
    transpose(row,col,input);
}
