#include <iostream>
using namespace std;

class DynamicArray {
    int *data;
    int nextIndex;
    int size;

    public :

        DynamicArray (int n) {
            data = new int[n];
            nextIndex = 0;
            size = n;
        }

        DynamicArray (DynamicArray const &d) {
            // this -> data = d.data; // Shallow copy

            // Deep copy
            this -> data = new int[d.size];
            for (int i = 0; i < d.nextIndex; i++) {
                this -> data[i] = d.data[i];
            }
            this -> nextIndex = d.nextIndex;
            this -> size = d.size;
        }

        DynamicArray operator=(DynamicArray const &d) {
            // this -> data = d.data; // Shallow copy

            // Deep copy
            this -> data = new int[d.size];
            for (int i = 0; i < d.nextIndex; i++) {
                this -> data[i] = d.data[i];
            }
            this -> nextIndex = d.nextIndex;
            this -> size = d.size;
        }

        void add (int element) {
            if (nextIndex == size) {
                int *newData = new int[2 * size];
                for (int i = 0; i < size; i++) {
                    newData[i] = data[i];
                }
                delete [] data;
                data = newData;
                size *= 2;
            }
            data[nextIndex] = element;
            nextIndex++;
        }

        int getElemet (int i) const {
            if (i < nextIndex) {
                return data[i];
            } else {
                return -1;
            }
        }

        void add (int i, int element) {
            if (i < nextIndex) {
                data[i] = element;
            } else if (i == nextIndex) {
                add(element);
            } else {
                return;
            }
        }

        void print () const {
            for (int i = 0; i < nextIndex; i++) {
                cout << data[i] << " ";
            }
            cout << endl;
        }
};
