#include <cstddef>

template <typename T>

class Node {
public:
    T data;
    Node* next;

    Node(T data) {
        this->data = data;
        next = NULL;
    }
};

template <typename T>

class StackUsingLL {
    T *head;
    int size;

    public :

        StackUsingLL () {
            head = NULL;
            size = 0;
        }

        // Push element n onto stack.

        void push (T n) {
            Node<T> *newNode = new Node<T>(n);

            newNode->next = head;
            head = newNode;

            size++;
        }

        // Removes the element on top of the stack.

        T pop () {
            if (head == NULL) {
                return;
            }

            T ans = head->data;
            Node<T>  *temp = head;
            head = head->next;

            delete temp;
            size--;

            return ans;
        }

        // Get the top element.

        T top () {
            if (head == NULL) {
                return -1;
            }

            return head->data;
        }

        // Is stack is empty or not

        bool isEmpty () {
            return head == NULL;
        }

        // Return size of stack.

        int getSize () {
            return size;
        }
};
