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

Node *skipMdeleteN(Node *head, int M, int N)
{
	// Write your code here
    if (head == NULL) {
        return head;
    }

    if (M == 0) {
        return NULL;
    }

    if (N == 0) {
        return head;
    }

    Node *temp = head;
    Node *temp2 = head;
    Node *temp3 = head;

    int count = 0;
    int count2 = 0;

    while (temp != NULL) {
        count = 0;
        count2 = 0;

        while (count < M && temp != NULL) {
            temp2 = temp;
            temp = temp->next;
            count++;
        }

        while (count2 < N && temp != NULL) {
            temp3 = temp;
            temp = temp->next;
            delete temp3;
            count2++;
        }

        temp2->next = temp;
    }

    temp2->next = NULL;

    return head;
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
		int m, n;
		cin >> m >> n;
		head = skipMdeleteN(head, m, n);
		print(head);
	}
	return 0;
}
