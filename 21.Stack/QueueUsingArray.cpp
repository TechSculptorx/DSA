#include <iostream>
using namespace std;

template <typename T>

class Queue {
    int firstIndex, nextIndex;
    int capacity;
    int size;
    T *arr;

    public :
        Queue (T num) {
            arr = new T[num];
            firstIndex = -1;
            nextIndex = 0;
            size = 0;
            capacity = num;
        }

        int getSize () {
            return size;
        }

        bool isEmpty () {
            return size == 0;
        }

        void enqueue (T data) {

            if (size == capacity) {
                T *newArr = new T[2 * capacity];
                int j = 0;

                for (int i = firstIndex; i < capacity; i++) {
                    newArr[j] = arr[i];
                    j++;
                }

                for (int i = 0; i < firstIndex; i++) {
                    newArr[j] = arr[i];
                    j++;
                }

                delete [] arr;
                arr = newArr;
                firstIndex = 0;
                nextIndex = capacity;
                capacity *= 2;
            }

            if (firstIndex == -1) {
                firstIndex = 0;
            }

            arr[nextIndex] = data;
            size++;
            nextIndex = (nextIndex + 1) % capacity;
        }

        T dequeue () {
            if (isEmpty()) {
                cout << "Queue is empty" << endl;
                return 0;
            }

            T data = arr[firstIndex];
            firstIndex = (firstIndex + 1) % capacity;

            if (firstIndex == nextIndex) {
                firstIndex = -1;
                nextIndex = 0;
            }

            size--;

            return data;
        }

        T front () {
            if (isEmpty()) {
                cout << "Queue is empty" << endl;
                return 0;
            }

            return arr[firstIndex];
        }
};
