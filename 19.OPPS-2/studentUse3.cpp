#include <iostream>
using namespace std;
#include "Student3.cpp"

int main () {
    Student s1(24, 100);

    s1.print();

    Student s2(24, 101), s3(24, 102), s4(24, 103), s5(24, 104);

    cout << "Total students : " << Student :: getTotalStudents() << endl;
}
