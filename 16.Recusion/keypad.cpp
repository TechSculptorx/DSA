#include <iostream>
#include <string>
using namespace std;

#include <string>
using namespace std;

int keypad(int num, string output[]){
    if(num == 0){
        output[0] = "";
        return 1;
    }
    int lastDigit = num % 10;
    int smallNum = num / 10;
    int smallOutputSize = keypad(smallNum, output);
    string options[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    string option = options[lastDigit];
    for(int i = 0; i < option.size() - 1; i++){
        for(int j = 0; j < smallOutputSize; j++){
            output[j + (i + 1) * smallOutputSize] = output[j];
        }
    }
    int k = 0;
    for(int i = 0; i < option.size(); i++){
        for(int j = 0; j < smallOutputSize; j++){
            output[k] = output[k] + option[i];
            k++;
        }
    }
    return smallOutputSize * option.size();
}



int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}
