class Polynomial {
    int *degCoeff;      // Name of your array (Don't change this)

    // Complete the class

    public:
        Polynomial() {
            degCoeff = new int[1];
            degCoeff[0] = 0;
        }

        Polynomial(Polynomial const &p) {
            degCoeff = new int[p.degCoeff[0] + 1];
            for (int i = 0; i <= p.degCoeff[0]; i++) {
                degCoeff[i] = p.degCoeff[i];
            }
        }

        Polynomial operator=(Polynomial const &p) {
            degCoeff = new int[p.degCoeff[0] + 1];
            for (int i = 0; i <= p.degCoeff[0]; i++) {
                degCoeff[i] = p.degCoeff[i];
            }
            return *this;
        }

        void print() {
            for (int i = 0; i <= degCoeff[0]; i++) {
                cout << degCoeff[i] << " ";
            }
            cout << endl;
        }

        void setCoefficient(int degree, int coeff) {
            if (degree > degCoeff[0]) {
                int *newDegCoeff = new int[degree + 1];
                for (int i = 0; i <= degCoeff[0]; i++) {
                    newDegCoeff[i] = degCoeff[i];
                }
                for (int i = degCoeff[0] + 1; i <= degree; i++) {
                    newDegCoeff[i] = 0;
                }
                delete [] degCoeff;
                degCoeff = newDegCoeff;
                degCoeff[0] = degree;
            }
            degCoeff[degree] = coeff;
        }

        Polynomial operator+(Polynomial const &p) {
            Polynomial pNew;
            int i = 0, j = 0;
            while (i <= degCoeff[0] && j <= p.degCoeff[0]) {
                pNew.setCoefficient(i, degCoeff[i] + p.degCoeff[j]);
                i++;
                j++;
            }
            while (i <= degCoeff[0]) {
                pNew.setCoefficient(i, degCoeff[i]);
                i++;
            }
            while (j <= p.degCoeff[0]) {
                pNew.setCoefficient(j, p.degCoeff[j]);
                j++;
            }
            return pNew;
        }

        Polynomial operator-(Polynomial const &p) {
            Polynomial pNew;
            int i = 0, j = 0;
            while (i <= degCoeff[0] && j <= p.degCoeff[0]) {
                pNew.setCoefficient(i, degCoeff[i] - p.degCoeff[j]);
                i++;
                j++;
            }
            while (i <= degCoeff[0]) {
                pNew.setCoefficient(i, degCoeff[i]);
                i++;
            }
            while (j <= p.degCoeff[0]) {
                pNew.setCoefficient(j, -p.degCoeff[j]);
                j++;
            }
            return pNew;
        }

        Polynomial operator*(Polynomial const &p) {
            Polynomial pNew;
            for (int i = 0; i <= degCoeff[0]; i++) {
                for (int j = 0; j <= p.degCoeff[0]; j++) {
                    int degree = i + j;
                    int coeff = degCoeff[i] * p.degCoeff[j];
                    pNew.setCoefficient(degree, pNew.degCoeff[degree] + coeff);
                }
            }
            return pNew;
        }

        bool operator==(Polynomial const &p) {
            if (degCoeff[0] != p.degCoeff[0]) {
                return false;
            }
            for (int i = 0; i <= degCoeff[0]; i++) {
                if (degCoeff[i] != p.degCoeff[i]) {
                    return false;
                }
            }
            return true;
        }

        ~Polynomial() {
            delete [] degCoeff;
        }
};
