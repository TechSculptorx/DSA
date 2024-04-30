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

void zigZagOrder(BinaryTreeNode<int> *root) {
    // Write your code here
    if (root == NULL) {
        return;
    }

    queue<BinaryTreeNode<int>*> q;
    q.push(root);

    bool leftToRight = true;

    while (!q.empty()) {
        int n = q.size();
        if (leftToRight) {
            for (int i = 0; i < n; i++) {
                BinaryTreeNode<int>* front = q.front();
                q.pop();
                cout << front->data << " ";
                if (front->left != NULL) {
                    q.push(front->left);
                }
                if (front->right != NULL) {
                    q.push(front->right);
                }
            }
        } else {
            vector<int> v;
            for (int i = 0; i < n; i++) {
                BinaryTreeNode<int>* front = q.front();
                q.pop();
                v.push_back(front->data);
                if (front->left != NULL) {
                    q.push(front->left);
                }
                if (front->right != NULL) {
                    q.push(front->right);
                }
            }
            for (int i = v.size() - 1; i >= 0; i--) {
                cout << v[i] << " ";
            }
        }
        leftToRight = !leftToRight;
        cout << endl;
    }

    return;
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
    zigZagOrder(root);
}
