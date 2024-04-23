#include <iostream>
using namespace std;
#include "TreeNode.cpp"
#include <queue>

void print (TreeNode<int>* root) {
    if (root == NULL) {
        cout << "NULL" << endl; // Edge case
    }

    cout << root -> data << ": ";

    for (int i = 0; i < root -> children.size(); i++) {
        cout << root -> children[i] -> data << ", ";
    }

    cout << endl;

    for (int i = 0; i < root -> children.size(); i++) {
        print(root -> children[i]);
    }
}

TreeNode<int> * takeInput () {
    int rootData;
    cout << "Enter data" << endl;
    cin >> rootData;

    TreeNode<int>* root = new TreeNode<int>(rootData);


    int n;
    cout << "Enter number of children of " << rootData << endl;
    cin >> n;

    for (int i = 0; i < n; i++) {
        TreeNode<int>* child = takeInput();
        root -> children.push_back(child);
    }

    return root;
}

TreeNode<int> * takeInputLevelvise() {
    int rootData;
    cout << "Enter root data" << endl;
    cin >> rootData;

    TreeNode<int>* root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);

    while (pendingNodes.size() != 0) {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();

        cout << "Enter number of children of " << front -> data << endl;
        int numChild;
        cin >> numChild;

        for (int i = 0; i < numChild; i++) {
            int childData;
            cout << "Enter " << i << "th child of " << front -> data << endl;
            cin >> childData;

            TreeNode<int>* child = new TreeNode<int>(childData);
            front -> children.push_back(child);
            pendingNodes.push(child);
        }
    }

    return root;
}

void printLevelWise(TreeNode<int>* root) {
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);

    while (pendingNodes.size() != 0) {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();

        cout << front -> data << ": ";

        for (int i = 0; i < front -> children.size(); i++) {

            if (i == front -> children.size() - 1) {
                cout << front -> children[i] -> data;
            } else {
                cout << front -> children[i] -> data << ", ";
            }

            pendingNodes.push(front -> children[i]);
        }

        cout << endl;
    }
}

int main () {
    TreeNode<int>* root = takeInputLevelvise();

    printLevelWise(root);
}
