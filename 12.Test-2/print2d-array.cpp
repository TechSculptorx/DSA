#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

void print2DArray(int input[][1000], int row, int col) {
    int i,j,k;
	for(i=0;i<row;i++){
        for(k=1;k<=row-i;k++){
            for(j=0;j<col;j++){
                cout << input[i][j] << ' ';
            }
            cout << endl;
        }
    }
}

int main() {
    int row, col;
    cin >> row >> col;

    int input[row][1000];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>input[i][j];
        }
    }
    print2DArray(input, row, col);
}
