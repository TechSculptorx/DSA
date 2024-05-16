#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main () {
    unordered_map<string, int> mymap;
    mymap["a"] = 1;
    mymap["b"] = 2;
    mymap["c"] = 3;
    mymap["d"] = 4;
    mymap["e"] = 5;
    mymap["f"] = 6;
    mymap["g"] = 7;
    mymap["h"] = 8;
    mymap["i"] = 9;
    mymap["j"] = 10;

    unordered_map<string, int>::iterator it = mymap.begin();
    while (it != mymap.end()) {
        cout << it->first << " => " << it->second << endl;
        it++;
    }
}
