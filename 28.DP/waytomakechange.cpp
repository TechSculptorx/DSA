#include <iostream>
using namespace std;

int countWaysToMakeChange(int *denominations, int numDenominations, int value){

    int **output=new int*[numDenominations+1];
    for(int i=0;i<=numDenominations;i++){
        output[i]=new int[value+1];
    }
    for(int i=0;i<=numDenominations;i++){
        for(int j=0;j<=value;j++){
            if(j==0){
                output[i][j]=1;
                continue;
            }
            if(i==0){
                output[i][j]==0;
                continue;
            }
            int count=0;
    		int k=denominations[numDenominations-i];
            int value=j;
            while(value>=0){
                count+=output[i-1][value];
                value-=k;
            }
            output[i][j]=count;
        }
    }
    return output[numDenominations][value];

}

int main()
{

	int numDenominations;
	cin >> numDenominations;

	int *denominations = new int[numDenominations];

	for (int i = 0; i < numDenominations; i++)
	{
		cin >> denominations[i];
	}

	int value;
	cin >> value;

	cout << countWaysToMakeChange(denominations, numDenominations, value);

	delete[] denominations;
}
