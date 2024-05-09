#include <iostream>
#include <queue>
#include <limits.h>
#include<unordered_set>

template <typename T>
class BinaryTreeNode {
    public :
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
    ~BinaryTreeNode() {
    	if(left)
       		delete left;
    	if(right)
       		delete right;
    }
};

using namespace std;

int Floor(BinaryTreeNode<int> *node, int input)
{
		/*Write your code here.
	 *Don't write main().
	 *Don't take input, it is passed as function argument.
	 *Don't print output.
	 *Taking input and printing output is handled automatically.
	*/

    int floorValue = INT_MIN; // Initialize floor value as negative infinity

    while (node != nullptr) {
        if (node->data == input)
            return node->data; // If the key is found, return it

        // If current node's value is less than the key, update floor and move to right subtree
        if (node->data < input) {
            floorValue = node->data;
            node = node->right;
        }
        // If current node's value is greater than the key, move to left subtree
        else
            node = node->left;
    }

    return floorValue;
}



BinaryTreeNode<int>* takeInput() {
    int rootData;
    //cout << "Enter root data : ";
    cin >> rootData;
    if(rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(!q.empty()) {
        BinaryTreeNode<int> *currentNode = q.front();
	q.pop();
        int leftChild, rightChild;
        //cout << "Enter left child of " << currentNode -> data << " : ";
        cin >> leftChild;
        if(leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode -> left =leftNode;
            q.push(leftNode);
        }
        //cout << "Enter right child of " << currentNode -> data << " : ";
        cin >> rightChild;
        if(rightChild != -1) {
            BinaryTreeNode<int>* rightNode = new BinaryTreeNode<int>(rightChild);
            currentNode -> right =rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

int main() {
	int x;
    cin>>x;
    BinaryTreeNode<int>* root1 = takeInput();

    cout<<Floor(root1,x);

        delete root1;

    return 0;
}
