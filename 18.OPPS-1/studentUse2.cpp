#include <iostream>
using namespace std;
#include "student.cpp"

int main () {
    // create objects statically

    Student s1;

    s1.rollNo = 101;
    // s1.age = 20;
    s1.setAge(20);

    s1.display();

    // create objects dynamically

    Student *s2 = new Student;

    s2 -> rollNo = 102;
    s2 -> setAge(25);

    s2 -> display();

}
