#include<iostream>
using namespace std;

void func(char *str)
{
    int count = 0;
    while (str[count] != '\0')
    {
        count++;
    }

    for (int i = 0; i < count / 2; i++) {
        char temp = str[i];
        str[i] = str[count - i - 1];
        str[count - i - 1] = temp;
    }
}


int main()
{
    char ch[100001];
    int t;
    cin>>t;
    while(t--)
    {
        cin>>ch;
        func(ch);
        cout<<ch;
	cout<<endl;
    }
}
