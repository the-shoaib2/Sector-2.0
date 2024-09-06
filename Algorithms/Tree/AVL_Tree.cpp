#include <bits/stdc++.h>
using namespace std;

// Define the tree node structure using typedef
typedef struct TreeNode {
    int val;
    int height;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), height(1), left(NULL), right(NULL) {}
} TreeNode;

// Get height of the tree node
int height(TreeNode* node) {
    if (node == NULL) return 0;
    return node->height;
}

// Update height of the tree node
void updateHeight(TreeNode* node) {
    node->height = max(height(node->left), height(node->right)) + 1;
}

// Get balance factor of the tree node
int balanceFactor(TreeNode* node) {
    if (node == NULL) return 0;
    return height(node->left) - height(node->right);
}

// Right rotation
TreeNode* rightRotate(TreeNode* y) {
    TreeNode* x = y->left;
    TreeNode* T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    // Update heights
    updateHeight(y);
    updateHeight(x);

    // Return new root
    return x;
}

// Left rotation
TreeNode* leftRotate(TreeNode* x) {
    TreeNode* y = x->right;
    TreeNode* T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    // Update heights
    updateHeight(x);
    updateHeight(y);

    // Return new root
    return y;
}

// Insertion into AVL Tree
TreeNode* insert(TreeNode* root, int val) {
    // Perform standard BST insertion
    if (root == NULL) return new TreeNode(val);

    if (val < root->val)
        root->left = insert(root->left, val);
    else if (val > root->val)
        root->right = insert(root->right, val);
    else // Duplicate values not allowed
        return root;

    // Update height of this ancestor node
    updateHeight(root);

    // Get the balance factor of this ancestor node
    int balance = balanceFactor(root);

    // If this node becomes unbalanced, there are 4 cases

    // Left Left Case
    if (balance > 1 && val < root->left->val)
        return rightRotate(root);

    // Right Right Case
    if (balance < -1 && val > root->right->val)
        return leftRotate(root);

    // Left Right Case
    if (balance > 1 && val > root->left->val) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    // Right Left Case
    if (balance < -1 && val < root->right->val) {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    // return the (unchanged) root pointer
    return root;
}

// In-Order Traversal on AVL Trees
void inorder(TreeNode* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main() {
    // Construct the AVL Tree (example)
    TreeNode* root = NULL;
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 50);
    root = insert(root, 25);

    // Perform In-Order traversal
    cout << "In-Order Traversal: ";
    inorder(root);
    cout << endl;

    return 0;
}



// In-Order Traversal: 10 20 25 30 40 50