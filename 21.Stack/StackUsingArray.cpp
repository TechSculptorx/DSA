#include <iostream>
using namespace std;

template <typename T>

class StackUsingArray {
    T *data;
    int nextIndex;
    int capacity;

    public :
        StackUsingArray () {
            data = new T[5];
            capacity = 5;
            nextIndex = 0;
        }

        // Push element n onto stack.

        void push (T n) {
            if (nextIndex == capacity) {
                // cout << "Stack is full" << endl;
                // return;

                // Doubling the capacity of stack

                T *newData = new T[2 * capacity];
                for (int i = 0; i < capacity; i++) {
                    newData[i] = data[i];
                }
                capacity *= 2;
                delete [] data;
                data = newData;
            }

            data[nextIndex] = n;
            nextIndex++;
        }

        // Removes the element on top of the stack.

        void pop () {
            if (nextIndex == 0) {
                cout << "Stack is empty" << endl;
                return;
            }
            nextIndex--;
        }

        // Get the top element.

        T top () {
            if (nextIndex == 0) {
                cout << "Stack is empty" << endl;
                return -1;
            }
            return data[nextIndex - 1];
        }

        // Returns whether the stack is empty.

        bool isEmpty () {
            return nextIndex == 0;
        }

        // Return size of stack.

        int size () {
            return nextIndex;
        }

        // Is stack is full or not

        bool isFull () {
            return nextIndex == capacity;
        }

        // Return capacity of stack.

        int getCapacity () {
            return capacity;
        }
};
