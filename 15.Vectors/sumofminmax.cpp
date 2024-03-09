#include <iostream>
#include<vector>
#include <utility>
#include <algorithm>
#include <climits>
using namespace std;


int sumOfMaxMin(vector<int> arr, int n){
    sort(arr.begin(), arr.end());

    return arr[0] + arr[n-1];
}


int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testcase;
    cin>>testcase;

    while(testcase--){

        int n;
        cin>>n;

        vector<int>arr(n);

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int ans = sumOfMaxMin(arr, n);

        cout<<ans<<endl;
    }
    return 0;
}
