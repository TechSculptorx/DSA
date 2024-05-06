#include <iostream>
using namespace std;

class BSTNode {
    public:
        int value;
        BSTNode* left;
        BSTNode* right;
        int count;

        BSTNode(int value) {
            this->value = value;
            this->left = NULL;
            this->right = NULL;
            this->count = 1;
        }
};
