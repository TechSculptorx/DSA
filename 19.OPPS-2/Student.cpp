#include <iostream>
using namespace std;
#include <cstring>

class Student {
    private :
        int age;
        // char *name;

    public :
        char *name;

        Student (int age, char *name) {
            this -> age = age;

            // Shallow copy
            // this -> name = name;

            // Deep copy
            this -> name = new char[strlen(name) + 1];
            strcpy(this -> name, name);
        }

        Student (const Student &s) {
            this -> age = s.age;
            // Shallow copy
            // this -> name = s.name;

            // Deep copy
            this -> name = new char[strlen(s.name) + 1];
            strcpy(this -> name, s.name);
        }

        void display () {
            cout << name << " " << age << endl;
        }
};
