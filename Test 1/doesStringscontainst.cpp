#include<iostream>
using namespace std;

bool checksequenece(char large[] , char*small) {
    bool val;
    if (large[1] == '\0' && small[1] != '\0')
        return false;
    if (large[0] == small[0] && small[1] == '\0')
        return true;
    if (large[0] != small[0] && small[1] == '\0' && large[1] == '\0')
        return false;
    if (large[0] == small[0])
        val = checksequenece(large + 1, small + 1);
    else
        val = checksequenece(large + 1, small);
    if (val == true)
        return true;
    else
        return false;
}


int main()
{
	char large[10000];
	char small[10000];
	cin>>large;
	cin>>small;
	bool x=checksequenece(large , small);

	if(x)
		cout<<"true";
	else
		cout<<"false";

}
