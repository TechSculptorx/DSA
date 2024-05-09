#include <cstdlib>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <climits>
#include <queue>
#include <bits/stdc++.h>

class TreeNode
{
public:
    int data;
    TreeNode *left, *right;
    TreeNode() : data(0), left(NULL), right(NULL) {}
    TreeNode(int x) : data(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
};

using namespace std;

pair<int, int> predecessorSuccessor(TreeNode *root, int key)
{
    // Write your code here.
    if (root == NULL)
    {
        return make_pair(-1, -1);
    }

    TreeNode *predecessor = NULL;

    TreeNode *successor = NULL;

    while (root != NULL)
    {
        if (root->data == key)
        {
            if (root->left != NULL)
            {
                TreeNode *temp = root->left;
                while (temp->right != NULL)
                {
                    temp = temp->right;
                }
                predecessor = temp;
            }

            if (root->right != NULL)
            {
                TreeNode *temp = root->right;
                while (temp->left != NULL)
                {
                    temp = temp->left;
                }
                successor = temp;
            }

            break;
        }
        else if (root->data > key)
        {
            successor = root;
            root = root->left;
        }
        else
        {
            predecessor = root;
            root = root->right;
        }
    }

    return make_pair(predecessor == NULL ? -1 : predecessor->data, successor == NULL ? -1 : successor->data);
}

class Runner
{
    int t;

    vector<TreeNode *> arr;
    vector<int> keys;

public:
    void takeInput()
    {

        t = 1;

        for (int c = 0; c < t; c++)
        {
            int rootData;
            cin >> rootData;

            if (rootData == -1)
            {
                arr.push_back(NULL);
            }

            TreeNode *root = new TreeNode(rootData);

            queue<TreeNode *> q;

            q.push(root);

            while (!q.empty())
            {
                TreeNode *currentNode = q.front();
                q.pop();
                int leftChild, rightChild;

                cin >> leftChild;

                if (leftChild != -1)
                {
                    TreeNode *leftNode = new TreeNode(leftChild);
                    currentNode->left = leftNode;
                    q.push(leftNode);
                }

                cin >> rightChild;
                if (rightChild != -1)
                {
                    TreeNode *rightNode = new TreeNode(rightChild);
                    currentNode->right = rightNode;
                    q.push(rightNode);
                }
            }
            arr.push_back(root);

            int key;

            cin >> key;

            keys.push_back(key);
        }
    }

    TreeNode *copyTree(TreeNode *root)
    {
        if (root == NULL)
        {
            return NULL;
        }
        TreeNode *copyRoot = new TreeNode(root->data);
        copyRoot->left = copyTree(root->left);
        copyRoot->right = copyTree(root->right);
        return copyRoot;
    }

    void execute()
    {
        for (int i = 0; i < t; i++)
        {
            TreeNode *copy = copyTree(arr[i]);

            pair<int, int> ans = predecessorSuccessor(copy, keys[i]);

            delete copy;
        }
    }

    void executeAndPrintOutput()
    {
        for (int i = 0; i < t; i++)
        {
            TreeNode *root = arr[i];

            pair<int, int> ans = predecessorSuccessor(root, keys[i]);

            cout << ans.first << " " << ans.second << endl;
        }
    }
};

int main()
{
    Runner runner;

    runner.takeInput();
    runner.executeAndPrintOutput();

    return 0;
}
