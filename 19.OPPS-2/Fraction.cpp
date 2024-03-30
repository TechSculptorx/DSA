#include <iostream>
using namespace std;

class Fraction {
    private :
        int numerator;
        int denominator;

    public :

        Fraction () {

        }

        Fraction (int numerator, int denominator) {
            this -> numerator = numerator;
            this -> denominator = denominator;
        }

        int getNumerator() const {
            return numerator;
        }

        int getDenominator() const {
            return denominator;
        }

        void setNumerator(int n) {
            numerator = n;
        }

        void setDenominator(int d) {
            denominator = d;
        }

        void print() const {
            cout << this -> numerator << " / " << this -> denominator << endl;
        }

};
