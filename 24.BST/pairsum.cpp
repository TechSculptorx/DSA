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

bool find (BinaryTreeNode<int> *root, int x) {
    if (root == NULL) {
        return false;
    }

    if (root->data == x) {
        return true;
    }

    if (x < root->data) {
        return find(root->left, x);
    } else {
        return find(root->right, x);
    }
}

void pairSum(BinaryTreeNode<int> *root, int sum) {
    // Write your code here
    if (root == NULL) {
        return;
    }

    for (int i = 1; i < (sum + 1) / 2; i++) {
         cout << i << endl;
        if (find(root, i) && find(root, sum - i)) {
            cout << i << " " << sum - i << endl;
        }
    }

    cout << endl;
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
    int sum;
    cin >> sum;
    pairSum(root, sum);
    delete root;
}
