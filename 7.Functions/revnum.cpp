#include <iostream>
using namespace std;

bool palindrome(int n)
{
    // Write your code here

    int temp = n;

    int ans = 0;

    if (n == 1) {
        return true;
    }

    while (temp > 0) {
        int lastDigit = temp % 10;
        ans = ans * 10 + lastDigit;
        temp /= 10;
    }

    if (ans == n) {
      return true;
    }

    return false;
}

int main () {
  int n;
	cin >> n;
    bool pal = palindrome(n);
    if(pal == true)
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
