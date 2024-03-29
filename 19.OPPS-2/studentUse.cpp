#include <iostream>
using namespace std;
#include "Student.cpp"

int main () {
    char name[] = "John";
    Student s1(20, name);
    s1.display();

    Student s2(s1);

    s2.name[0] = 'O';

    s1.display();
    s2.display();
}
