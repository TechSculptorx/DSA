#include <iostream>
using namespace std;
#include "BSTNode.h"

BSTNode * insert (int val, BSTNode * root) {
    if (root == NULL) {
        return new BSTNode(val);
    }

    if (val == root->value) {
        root->count++;
    } else if (val < root->value) {
        root->left = insert(val, root->left);
    } else {
        root->right = insert(val, root->right);
    }

    return root;
}

void inorder (BSTNode * root) {
    if (root == NULL) {
        return;
    }

    inorder(root->left);
    cout << root->value << " ";
    inorder(root->right);
}

int main () {
    BSTNode * root = NULL;
    int n, val;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> val;

        root = insert(val, root);
        inorder(root);
        cout << endl;
    }
}
