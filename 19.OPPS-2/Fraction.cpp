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

        void simplify() {
            int gcd = 1;
            int j = min(this -> numerator, this -> denominator);
            for (int i = 1; i <= j; i++) {
                if (this -> numerator % i == 0 && this -> denominator % i == 0) {
                    gcd = i;
                }
            }
            this -> numerator = this -> numerator / gcd;
            this -> denominator = this -> denominator / gcd;
        }

        Fraction add(Fraction const &f2) const {
            int lcm = this -> denominator * f2.denominator;
            int x = lcm / this -> denominator;
            int y = lcm / f2.denominator;

            int num = x * this -> numerator + y * f2.numerator;

            Fraction fNew(num, lcm);
            fNew.simplify();
            return fNew;
        }

        Fraction operator+(Fraction const &f2) const {
            int lcm = this -> denominator * f2.denominator;
            int x = lcm / this -> denominator;
            int y = lcm / f2.denominator;

            int num = x * this -> numerator + y * f2.numerator;

            Fraction fNew(num, lcm);
            fNew.simplify();
            return fNew;
        }

        void multiply(Fraction const &f2) {
            this -> numerator = this -> numerator * f2.numerator;
            this -> denominator = this -> denominator * f2.denominator;

            this -> simplify();
        }

        Fraction operator*(Fraction const &f2) const {
            int n = this -> numerator * f2.numerator;
            int d = this -> denominator * f2.denominator;

            Fraction fNew(n, d);
            fNew.simplify();
            return fNew;
        }

        bool operator==(Fraction const &f2) const {
            return (this -> numerator == f2.numerator && this -> denominator == f2.denominator);
        }

        void print() const {
            cout << this -> numerator << " / " << this -> denominator << endl;
        }

        // Pre increment
        Fraction& operator++() {
            this -> numerator = this -> numerator + this -> denominator;
            this -> simplify();

            return *this;
        }

        // Post increment
        Fraction operator++(int) {
            Fraction fNew(this -> numerator, this -> denominator);
            this -> numerator = this -> numerator + this -> denominator;
            this -> simplify();

            fNew.simplify();
            return fNew;
        }

        Fraction& operator+=(Fraction const &f2) {
            int lcm = this -> denominator * f2.denominator;
            int x = lcm / this -> denominator;
            int y = lcm / f2.denominator;

            int num = x * this -> numerator + y * f2.numerator;

            this -> numerator = num;
            this -> denominator = lcm;

            this -> simplify();
            return *this;
        }
};
