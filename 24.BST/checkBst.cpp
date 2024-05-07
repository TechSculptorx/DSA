#include <iostream>
#include <queue>

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T>* left;
    BinaryTreeNode<T>* right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

using namespace std;

int getLow(BinaryTreeNode<int> *root){
    if(root == NULL){
        return INT_MAX;
    }

    int res = root -> data;

    return min(res, min(getLow(root -> left), getLow(root -> right)));
}

int getHigh(BinaryTreeNode<int> *root){
    if(root == NULL){
        return INT_MIN;
    }

    int res = root -> data;

    return max(res, max(getHigh(root -> left), getHigh(root -> right)));
}

bool isBST(BinaryTreeNode<int> *root) {
	// Write your code here
    if(root == NULL){
        return true;
    }

    int l = getLow(root->right);
    int h = getHigh(root->left);

    if(root->data < h || root->data > l){
        return false;
    }

    bool left = isBST(root->left);
    bool right = isBST(root->right);

    return left && right;
}

BinaryTreeNode<int>* takeInput() {
    int rootData;
    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int>* currentNode = q.front();
        q.pop();
        int leftChild, rightChild;

        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int>* rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

int main() {
    BinaryTreeNode<int>* root = takeInput();
    cout << (isBST(root) ? "true" : "false");
}
