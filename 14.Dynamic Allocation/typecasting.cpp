#include <iostream>
using namespace std;

void updateValue(int *p){
    *p = 610 % 255;
}

int main () {
    // int i = 65;
    // int *p = &i;

    // char *pc = (char*)p; // Explicit typecasting from int* to char*
    // float *pf = (float*)p; // Explicit typecasting from int* to float*

    // cout << *pc << endl;
    // cout << *pf << endl;

     char ch = 'A';
    char *pt = &ch;
    updateValue((int*)pt);
    cout << ch;
}
