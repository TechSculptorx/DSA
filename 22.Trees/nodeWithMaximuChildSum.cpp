#include <iostream>
#include <queue>
#include <vector>
using namespace std;

template <typename T>
class TreeNode {
   public:
    T data;
    vector<TreeNode<T>*> children;

    TreeNode(T data) { this->data = data; }

    ~TreeNode() {
        for (int i = 0; i < children.size(); i++) {
            delete children[i];
        }
    }
};

TreeNode<int>* maxSumNode(TreeNode<int>* root) {
    if (root == NULL) {
        return NULL;
    }

    TreeNode<int>* maxNode = root;
    int maxSum = root->data;

    for (int i = 0; i < root->children.size(); i++) {
        maxSum += root->children[i]->data;
    }

    for (int i = 0; i < root->children.size(); i++) {
        TreeNode<int>* childNode = maxSumNode(root->children[i]);
        int childSum = childNode->data;

        for (int j = 0; j < childNode->children.size(); j++) {
            childSum += childNode->children[j]->data;
        }

        if (childSum > maxSum) {
            maxSum = childSum;
            maxNode = childNode;
        }
    }

    return maxNode;
}

TreeNode<int>* takeInputLevelWise() {
    int rootData;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes;

    pendingNodes.push(root);
    while (pendingNodes.size() != 0) {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++) {
            int childData;
            cin >> childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }

    return root;
}

int main() {
    TreeNode<int>* root = takeInputLevelWise();

    TreeNode<int>* ans = maxSumNode(root);

    if (ans != NULL) {
        cout << ans->data;
    }
}
