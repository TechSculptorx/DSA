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

Node *appendLastNToFirst(Node *head, int n)
{
    //Write your code here
    if (head == NULL || n == 0) {
        return head;
    }
    Node *temp = head;
    Node *temp1 = head;
    Node *temp2 = head;

    int count = 0;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    if (n >= count) {
        return head;
    }

    for (int i = 0; i < count - n - 1; i++) {
        temp1 = temp1->next;
    }

    Node *newHead = temp1->next;
    temp1->next = NULL;
    temp2 = newHead;

    while (temp2->next != NULL) {
        temp2 = temp2->next;
    }

    temp2->next = head;
    return newHead;
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
		int n;
		cin >> n;
		head = appendLastNToFirst(head, n);
		print(head);
	}
	return 0;
}
