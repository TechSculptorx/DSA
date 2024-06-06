#include <bits/stdc++.h>
using namespace std;

#include<cmath>
int helper(int a,int b,int s){
    if(a==0){
        return 1;
    }
    int i=s+1;
    int count=0;
    while(pow(i,b)<=a){
        count+=helper(a-pow(i,b),b,i);
        i++;
    }
    return count;
}
int getAllWays(int a, int b) {
	// Write your code here
    return helper(a,b,0);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << getAllWays(a, b);
}
