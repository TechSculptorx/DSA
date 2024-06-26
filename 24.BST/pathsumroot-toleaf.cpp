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

    ~BinaryTreeNode() {
        if (left) delete left;
        if (right) delete right;
    }
};

using namespace std;

void rootToLeafPathsSum(BinaryTreeNode<int> *root , int k , string s){
    if(root == NULL)
        return;
    if(root -> left == NULL && root -> right == NULL){
        if(root -> data == k){
            string toAdded = to_string(root -> data);
            string newStr = s + toAdded + " ";
            cout << newStr << endl;
        }
    }

    string toAdded = to_string(root -> data);
    string newStr = s + toAdded + " ";
    rootToLeafPathsSum(root -> left, k - root -> data, newStr);
    rootToLeafPathsSum(root -> right, k - root -> data, newStr);
}


void rootToLeafPathsSumToK(BinaryTreeNode<int> *root, int k) {
    // Write your code here
    string s = "";
    rootToLeafPathsSum(root, k, s);
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
    int k;
    cin >> k;
    rootToLeafPathsSumToK(root, k);
    delete root;
}
