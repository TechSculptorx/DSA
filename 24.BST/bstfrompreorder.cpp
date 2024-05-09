#include <cstdlib>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>

using namespace std;

class TreeNode
{
public:
    int data;
    TreeNode *left, *right;
    TreeNode() : data(0), left(NULL), right(NULL) {}
    TreeNode(int x) : data(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
};

TreeNode *preOrderTree(vector<int> &preOrder)
{
    // Write your code here.
    if (preOrder.size() == 0)
    {
        return NULL;
    }

    TreeNode *root = new TreeNode(preOrder[0]);

    stack<TreeNode *> s;

    s.push(root);

    for (int i = 1; i < preOrder.size(); i++)
    {
        TreeNode *temp = NULL;

        while (!s.empty() && preOrder[i] > s.top()->data)
        {
            temp = s.top();
            s.pop();
        }

        if (temp != NULL)
        {
            temp->right = new TreeNode(preOrder[i]);
            s.push(temp->right);
        }
        else
        {
            temp = s.top();
            temp->left = new TreeNode(preOrder[i]);
            s.push(temp->left);
        }
    }

    return root;
}

class Runner
{
    int t;
    vector<vector<int>> arr;

public:
    void takeInput()
    {
        t = 1;
        arr.resize(t);

        for (int i = 0; i < t; i++)
        {
            int n;
            cin >> n;

            arr[i].resize(n);

            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }
    }

    void postorder(TreeNode *root)
    {
        if (root == NULL)
        {
            return;
        }

        postorder(root->left);

        postorder(root->right);

        cout << root->data << " ";
    }

    void execute()
    {
        vector<vector<int>> arrCopy = arr;

        for (int i = 0; i < t; i++)
        {
            TreeNode *root = preOrderTree(arrCopy[i]);

            delete root;
        }
        arrCopy.clear();
    }

    void executeAndPrintOutput()
    {
        for (int i = 0; i < t; i++)
        {

            TreeNode *root = preOrderTree(arr[i]);

            postorder(root);
            cout << "\n";
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
