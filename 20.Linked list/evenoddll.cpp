#include <iostream>

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

using namespace std;

Node *evenAfterOdd(Node *head)
{
	//write your code here
    if (head == NULL) {
        return head;
    }

    Node *oddH = NULL;
    Node *oddT = NULL;
    Node *evenH = NULL;
    Node *evenT = NULL;

    while (head != NULL) {
        if (head->data % 2 == 0) {
            if (evenH == NULL) {
                evenH = head;
                evenT = head;
            } else {
                evenT->next = head;
                evenT = head;
            }
        } else {
            if (oddH == NULL) {
                oddH = head;
                oddT = head;
            } else {
                oddT->next = head;
                oddT = head;
            }
        }
        head = head->next;
    }

    if (oddH == NULL) {
        return evenH;
    } else {
        oddT->next = evenH;
    }

    if (evenH != NULL) {
        evenT->next = NULL;
    }

    return oddH;
}

Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		head = evenAfterOdd(head);
		print(head);
	}
	return 0;
}
