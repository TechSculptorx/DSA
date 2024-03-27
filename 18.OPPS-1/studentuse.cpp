#include <iostream>
#include "student.cpp"
using namespace std;

void print(int a, int b) {
    cout << a << " " << b << endl;
}

int main () {
    // create objects statically

    Student s1;

    s1.rollNo = 101;
    // s1.age = 20;

    s1.display();

    // print(s1.rollNo, s1.age);

    // create objects dynamically

    Student *s2 = new Student;

    // (*s2).rollNo = 102;
    // (*s2).age = 25;

    s2 -> rollNo = 102;
    // s2 -> age = 25;

    s2 -> display();

    // print(s2 -> rollNo, s2 -> age);
}
