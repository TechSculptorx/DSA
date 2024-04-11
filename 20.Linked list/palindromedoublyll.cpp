#include <iostream>
using namespace std;
class Node
{
public:
	int data;
	Node *next;
	Node* prev;
	Node(int data)
	{

		this->data = data;
		this->next = NULL;
		this->prev = NULL;
	}
};

bool palindromeDLL(Node* head){
    if(head==NULL){
        return true;
    }

    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    while(head!=temp){
        if(head->data!=temp->data){
            return false;
        }
        head = head->next;
        temp = temp->prev;
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
		Node *newNode = new Node(data);
		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			newNode->prev = tail;
			tail = newNode;
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
		bool ans = palindromeDLL(head);

		if (ans) cout << "true";
		else cout << "false";

		cout << endl;
	}
	return 0;
}
