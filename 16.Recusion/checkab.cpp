#include <iostream>
using namespace std;

bool checkAB(char input[]) {
	// Write your code here
	static int count = 0;
    if (input[0] == 'a' && count == 0)
        count++;
    if (count == 0)
        return false;
    else
    {
        if (input[0] == 'a' && input[1] == '\0')
            return true;
        else if (input[0] == 'a' && (input[1] == 'a' || (input[1] == 'b' && input[2] == 'b')))
            return checkAB(input + 1);
        else if ((input[0] == 'b' && input[1] == 'b') && input[2] == '\0')
            return true;
        else if ((input[0] == 'b' && input[1] == 'b') && input[2] == 'a')
            return checkAB(input + 2);
        else
            return false;
    }
}

int main() {
    char input[100];
    bool ans;
    cin >> input;
    ans=checkAB(input);
    if(ans)
        cout<< "true" << endl;
    else
        cout<< "false" << endl;
}
