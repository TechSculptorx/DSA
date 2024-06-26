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

bool isPalindrome(Node *head)
{
    //Write your code here
    if (head == NULL) {
        return true;
    }

    Node *temp = head;
    Node *temp1 = head;
    Node *temp2 = head;

    int count = 0;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    for (int i = 0; i < count / 2; i++) {
        temp1 = temp1->next;
    }

    Node *prev = NULL;
    Node *curr = temp1;
    Node *next = NULL;

    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    temp2 = prev;

    while (temp2 != NULL) {
        if (temp2->data != head->data) {
            return false;
        }
        temp2 = temp2->next;
        head = head->next;

    }

    return true;
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
		bool ans = isPalindrome(head);

		if (ans) cout << "true";
		else cout << "false";

		cout << endl;
	}

	return 0;
}
