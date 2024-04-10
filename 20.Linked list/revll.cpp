#include <iostream>
using namespace std;
#include "Node.cpp"

class Pair {
    public :
        Node *head;
        Node *tail;
};

Node *reverseLL_3(Node *head) {
    if(head == NULL || head -> next == NULL) {
        return head;
    }

    Node *smallHead = reverseLL(head -> next);

    Node *tail = head -> next;
    tail -> next = head;
    head -> next = NULL;
    return smallHead;
}


Pair reverseLL_2 (Node *head) {
    if (head == NULL || head -> next == NULL) {
        Pair ans;
        ans.head = head;
        ans.tail = head;
        return ans;
    }

    Pair smallAns = reverseLL_2(head -> next);

    smallAns.tail -> next = head;
    head -> next = NULL;

    Pair ans;
    ans.head = smallAns.head;
    ans.tail = head;

    return ans;
}

Node *reverseLL_Better(Node *head) {
    return reverseLL_2(head).head;
}

Node *reverseLL(Node *head) {
    if(head == NULL || head -> next == NULL) {
        return head;
    }

    Node *smallHead = reverseLL(head -> next);

    Node *temp = smallHead;
    while(temp -> next != NULL) {
        temp = temp -> next;
    }

    temp -> next = head;
    head -> next = NULL;
    return smallHead;
}

Node *takeInput () {
    int data;
    cin >> data;

    Node *head = NULL;
    Node *tail = NULL;

    while(data != -1) {
        Node *newNode = new Node(data);

        if(head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail -> next = newNode;
            tail = newNode;
        }

        cin >> data;
    }

    return head;
}

void print (Node *head) {
    Node *temp = head;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}


int main () {
    Node *head = takeInput();

    head = reverseLL_Better(head);

    print(head);

    return 0;
}
