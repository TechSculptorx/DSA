#include<bits/stdc++.h>
using namespace std;

void removeAllOccurrencesOfChar(string input, char c)  {
    // string ans = "";
    // for(int i=0;i<input.size();i++){
    //     if(input[i]!=c){
    //         ans+=input[i];
    //     }
    // }
    // cout<<ans;

    string ans2 = "";
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == c) {
            continue;
        }
        ans2 += input[i];
    }
    cout << ans2;
}

int main(){
    string a;
    cin>>a;
    char c;
    cin>>c;
    removeAllOccurrencesOfChar(a,c);
}
