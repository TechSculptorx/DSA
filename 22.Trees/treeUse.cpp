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

int numNodes (TreeNode<int>* root) {
    int ans = 11;

    for (int i = 0; i < root -> children.size(); i++) {
        ans += numNodes(root -> children[i]);
    }

    return ans;
}

int findSumOfNodes(TreeNode<int> * root) {
    int sum = root -> data;

    for (int i = 0; i < root -> children.size(); i++) {
        sum += findSumOfNodes(root -> children[i]);
    }

    return sum;
}


TreeNode<int>* maxDataNode(TreeNode<int>* root) {
    int max = root -> data;

    TreeNode<int>* maxNode = root;

    for (int i = 0; i < root -> children.size(); i++) {
        TreeNode<int>* temp = maxDataNode(root -> children[i]);

        if (temp -> data > max) {
            max = temp -> data;
            maxNode = temp;
        }
    }

    return maxNode;
}

int heightOfTree(TreeNode<int>* root) {
    if (root == NULL) {
        return 0;
    }

    int num = 0;

    for (int i = 0; i < root -> children.size(); i++) {
        int temp = heightOfTree(root -> children[i]);

        if (temp > num) {
            num = temp;
        }
    }

    return num + 1;
}

void printAtlevelK (TreeNode<int>* root, int k) {
    if (k == 0) {
        cout << root -> data << " ";
        return;
    }

    for (int i = 0; i < root -> children.size(); i++) {
        printAtlevelK(root -> children[i], k - 1);
    }
}

int countLeafNodes(TreeNode<int>* root) {
    if (root -> children.size() == 0) {
        return 1;
    }

    int count = 0;

    for (int i = 0; i < root -> children.size(); i++) {
        count += countLeafNodes(root -> children[i]);
    }

    return count;
}

int main () {
    TreeNode<int>* root = takeInputLevelvise();

    printLevelWise(root);
}
