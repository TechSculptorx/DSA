#include <iostream>
using namespace std;
#include <unordered_map>
#include <string>

int main () {
    unordered_map<string, int> mymap;

    // pair<string, int> mypair ("Bakery", 30);
    // mymap.insert(mypair);

    mymap["Bakery"] = 30;
    mymap["Butcher"] = 50;

    cout << "Bakery: " << mymap["Bakery"] << endl;
    cout << mymap["abc"] << endl;

    if (mymap.count("abc") > 0) {
        cout << "abc is an element of mymap." << endl;
    } else {
        cout << "abc is not an element of mymap." << endl;
    }

    mymap.erase("abc");
}
