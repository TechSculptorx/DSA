#include <iostream>
#include <queue>
#include <climits>

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

/* One approch
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

int height (BinaryTreeNode<int> *root) {
    if (root == NULL) {
        return 0;
    }
    return 1 + max(height(root->left), height(root->right));
}

int largestBSTSubtree(BinaryTreeNode<int> *root) {
    // Write your code here
    if (root == NULL) {
        return 0;
    }

    if (isBST(root)) {
        return height(root);
    } else {
        return max(largestBSTSubtree(root->left), largestBSTSubtree(root->right));
    }
}
*/

vector<int> find (BinaryTreeNode<int> *root) {
    if (root == NULL) {
        return {INT_MAX, INT_MIN, 0};
    }

    vector<int> left = find(root->left);
    vector<int> right = find(root->right);

    vector<int> res(3);

    // Valid case
    if (root -> data > left[1] && root -> data < right[1]) {
        res[0] = min(root -> data, min(left[0], right[0]));
        res[1] = max(root -> data, max(left[1], right[1]));
        res[2] = max(left[2] + right[2]) + 1;
        return res;
    }

    // Invalid case
    res[0] = INT_MIN;
    res[1] = INT_MAX;
    res[2] = max(left[2], right[2]);

    return res;
}

int largestBSTSubtree(BinaryTreeNode<int> *root) {
    // Write your code here
    return find(root)[2];
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
    cout << largestBSTSubtree(root);
    delete root;
}
