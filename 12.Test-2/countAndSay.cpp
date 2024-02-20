
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

#include <bits/stdc++.h>
string writeAsYouSpeak(int n)
{
    string s = to_string(n);
    string res = "";
    int i = 0;
    while(i < s.length()) {
        int count = 1;
        while(i < s.length() - 1 && s[i] == s[i+1]) {
        count++;
        i++;
        }
        res += to_string(count) + s[i];
        i++;
    }
    return res;
}

signed main()
{

  int n , m , q , tc;
  cin>>tc;
  while(tc--) {
    cin>>n;
    cout<<writeAsYouSpeak(n)<<endl;
  }



    return 0;
}
