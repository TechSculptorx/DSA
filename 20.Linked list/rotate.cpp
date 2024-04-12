#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <utility>
#include <iomanip>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node() : data(0), next(nullptr) {}
    Node(int x) : data(x), next(nullptr) {}
    Node(int x, Node *next) : data(x), next(next) {}
};

Node *rotate(Node *head, int k) {
    Node *temp = head;
    int count = 0;
    while (temp->next != NULL) {
        temp = temp->next;
        count++;
    }

    temp->next = NULL;

    // If k is greater than the size of the linked list

    if (k > count) {
        k = k % (count + 2);
    }

    // Find the new head

    Node *newHead = head;
    for (int i = 0; i <= count - k; i++) {
        newHead = newHead->next;
    }

    // Find the new tail

    Node *newTail = newHead;
    for (int i = 0; i < count; i++) {
        newTail = newTail->next;
    }

    newTail->next = NULL;

    return newHead;
}

class Runner
{
    int k;
    vector<int> list;

public:
    void takeLLInput(int n)
    {
        while (n--)
        {
            int x;
            cin >> x;
            list.push_back(x);
        }
    }

    void printLL(Node *head)
    {

        while (head)
        {
            Node *temp = head;
            cout << head->data << ' ';
            head = head->next;
            delete temp;
        }
    }
    void takeInput()
    {
        int n;
        cin>>n;
        takeLLInput(n);
        cin >> k;
    }

    void execute()
    {
        Node *head = nullptr, *cur = nullptr;
        for (auto x : list)
        {
            if (x == -1)
                break;
            Node *temp = new Node(x);
            if (head)
            {
                cur->next = temp;
                cur = cur->next;
            }
            else
            {
                head = temp;
                cur = temp;
            }
        }
        Node *ans = rotate(head, k);
        while (head)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
    }

    void executeAndPrintOutput()
    {

        Node *head = nullptr, *cur = nullptr;
        for (auto x : list)
        {
            if (x == -1)
                break;
            Node *temp = new Node(x);
            if (head)
            {
                cur->next = temp;
                cur = cur->next;
            }
            else
            {
                head = temp;
                cur = temp;
            }
        }
        Node *ans = rotate(head, k);
        printLL(ans);
    }
};

int main()
{
    // freopen("testcases/large/in/input11.txt", "r", stdin);
    // freopen("testcases/large/out/output11.txt", "w", stdout);
    Runner runner;
    runner.takeInput();
    runner.executeAndPrintOutput();

    return 0;
}
