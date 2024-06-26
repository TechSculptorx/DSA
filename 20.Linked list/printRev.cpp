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

void printReverse(Node *head)
{
    //Write your code here
    if (head == NULL) {
        return;
    }

    printReverse(head->next);
    cout << head->data << " ";

    return;

    // rev linked list
    // if (head == NULL || head -> next == NULL) {
    //     return head;
    // }

    // Node *smallHead = printReverse(head -> next);

    // Node *temp = smallHead;
    // while (temp -> next != NULL) {
    //     temp = temp -> next;
    // }
    // temp -> next = head;
    // head -> next = NULL;
    // return smallHead;
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

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		printReverse(head);
		cout << endl;
	}
	return 0;
}
