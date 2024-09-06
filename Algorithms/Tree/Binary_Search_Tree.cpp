#include <bits/stdc++.h>
using namespace std;

// Define the tree node structure using typedef
typedef struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
} TreeNode;

// Insertion in Binary Search Tree (BST)
// Time Complexity: O(log N) on average, O(N) in worst case
TreeNode* insert(TreeNode* root, int val) {
    if (root == NULL) return new TreeNode(val);
    if (val < root->val)
        root->left = insert(root->left, val);
    else if (val > root->val)
        root->right = insert(root->right, val);
    return root;
}

// Search in Binary Search Tree (BST)
// Time Complexity: O(log N) on average, O(N) in worst case
bool search(TreeNode* root, int val) {
    if (root == NULL) return false;
    if (root->val == val) return true;
    if (val < root->val)
        return search(root->left, val);
    else
        return search(root->right, val);
}

// Deletion in Binary Search Tree (BST)
// Time Complexity: O(log N) on average, O(N) in worst case
TreeNode* remove(TreeNode* root, int val) {
    if (root == NULL) return root;
    if (val < root->val)
        root->left = remove(root->left, val);
    else if (val > root->val)
        root->right = remove(root->right, val);
    else {
        if (root->left == NULL) {
            TreeNode* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == NULL) {
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }
        TreeNode* temp = root->right;
        while (temp->left != NULL) temp = temp->left;
        root->val = temp->val;
        root->right = remove(root->right, temp->val);
    }
    return root;
}

// In-Order Traversal on Trees
// Time Complexity: O(V + E), where V is the number of vertices (nodes) and E is the number of edges in the tree
void inorder(TreeNode* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main() {
    // Construct a Binary Search Tree (BST) (example)
    TreeNode* root = NULL;
    root = insert(root, 5);
    root = insert(root, 3);
    root = insert(root, 7);
    root = insert(root, 1);
    root = insert(root, 4);
    
    // Perform search
    cout << "Searching for 3: " << (search(root, 3) ? "Found" : "Not Found") << endl;
    cout << "Searching for 6: " << (search(root, 6) ? "Found" : "Not Found") << endl;
    
    // Perform deletion
    root = remove(root, 3);
    cout << "After deleting 3, searching for 3: " << (search(root, 3) ? "Found" : "Not Found") << endl;
    
    // Perform In-Order traversal
    cout << "In-Order Traversal: ";
    inorder(root);
    cout << endl;
    
    return 0;
}


// Searching for 3: Found
// Searching for 6: Not Found
// After deleting 3, searching for 3: Not Found
// In-Order Traversal: 1 4 5 7