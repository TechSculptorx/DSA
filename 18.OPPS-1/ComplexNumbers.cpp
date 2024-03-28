#include <iostream>
using namespace std;

class ComplexNumbers {
    // Complete this class
    private :
        int real;
        int imaginary;

    public :
        ComplexNumbers (int real, int imaginary) {
            this -> real = real;
            this -> imaginary = imaginary;
        }

        void print () {
            cout << this -> real << " + i" << this -> imaginary << endl;
        }

        void plus (ComplexNumbers const &c2) {
            this -> real = this -> real + c2.real;
            this -> imaginary = this -> imaginary + c2.imaginary;
        }

        void multiply (ComplexNumbers const &c2) {
            int real = this -> real * c2.real - this -> imaginary * c2.imaginary;
            int imaginary = this -> real * c2.imaginary + this -> imaginary * c2.real;

            this -> real = real;
            this -> imaginary = imaginary;
        }
};
