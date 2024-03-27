#include <iostream>
using namespace std;
#include "student.cpp"

int main () {
    Student s1(10, 101);
    s1.display();

    Student s2(s1);
    s2.display();

    Student *s3 = new Student(20, 102);
    s3 -> display();

    Student *s4 = new Student(*s3);
    s4 -> display();

    Student *s6 = new Student(s1);
    s6 -> display();

}
