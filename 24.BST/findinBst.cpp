#include <iostream>
#include <queue>

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
    ~BinaryTreeNode() {
        if (left) delete left;
        if (right) delete right;
    }
};

using namespace std;
#include <vector>

vector<int>* getPath(BinaryTreeNode<int> *root , int data) {
	// Write your code here
    if (root == NULL) {
        return NULL;
    }

    vector<int> *output = new vector<int>();

    if (root -> data == data) {
        output -> push_back(root -> data);
        return output;
    } else if (root -> data > data) {
        vector<int> *leftOutput = getPath(root -> left, data);
        if (leftOutput != NULL) {
            leftOutput -> push_back(root -> data);
            return leftOutput;
        } else {
            return NULL;
        }
    } else {
        vector<int> *rightOutput = getPath(root -> right, data);
        if (rightOutput != NULL) {
            rightOutput -> push_back(root -> data);
            return rightOutput;
        } else {
            return NULL;
        }
    }
}

BinaryTreeNode<int> *takeInput() {
    int rootData;
    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }

    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int> *currentNode = q.front();
        q.pop();
        int leftChild, rightChild;
        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int> *leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }
        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int> *rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }

    return root;
}

int main() {
    BinaryTreeNode<int> *root = takeInput();
    int k;
    cin >> k;
    vector<int> *output = getPath(root, k);

    if (output != NULL) {
        for (int i = 0; i < output->size(); i++) {
            cout << output->at(i) << " ";
        }
    }

    delete root;
}
