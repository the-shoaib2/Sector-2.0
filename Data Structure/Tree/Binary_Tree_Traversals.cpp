#include <bits/stdc++.h>

using namespace std;

// Define the structure for a binary tree node
struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int value)
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }
    
};

// In-Order Traversal (Left - Root - Right)
void inOrderTraversal(TreeNode *root)
{
    if (root == nullptr)
    {
        return;
    }

    inOrderTraversal(root->left);
    cout << root->data << " --> ";
    inOrderTraversal(root->right);
}

// Pre-Order Traversal (Root - Left - Right)
void preOrderTraversal(TreeNode *root)
{
    if (root == nullptr)
    {
        return;
    }

    cout << root->data << " --> ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

// Post-Order Traversal (Left - Right - Root)
void postOrderTraversal(TreeNode *root)
{
    if (root == nullptr)
    {
        return;
    }

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " --> ";
}

int main()
{
    // Construct a sample binary tree\

    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    cout << "In-Order Traversal: ";
    inOrderTraversal(root);
    cout << endl;

    cout << "Pre-Order Traversal: ";
    preOrderTraversal(root);
    cout << endl;

    cout << "Post-Order Traversal: ";
    postOrderTraversal(root);
    cout << endl;

    return 0;
}
