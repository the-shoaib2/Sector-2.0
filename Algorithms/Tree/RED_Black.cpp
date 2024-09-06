#include <bits/stdc++.h>
using namespace std;

enum Color { RED, BLACK };

// Define the tree node structure
struct Node {
    int data;
    Color color;
    Node* left;
    Node* right;
    Node* parent;

    Node(int data) : data(data) {
        parent = left = right = NULL;
        // By default, new nodes are red
        color = RED;
    }
};

class RedBlackTree {
private:
    Node* root;

    // Function to perform left rotation
    void leftRotate(Node* x) {
        Node* y = x->right;
        x->right = y->left;
        if (y->left != NULL)
            y->left->parent = x;
        y->parent = x->parent;
        if (x->parent == NULL)
            root = y;
        else if (x == x->parent->left)
            x->parent->left = y;
        else
            x->parent->right = y;
        y->left = x;
        x->parent = y;
    }

    // Function to perform right rotation
    void rightRotate(Node* y) {
        Node* x = y->left;
        y->left = x->right;
        if (x->right != NULL)
            x->right->parent = y;
        x->parent = y->parent;
        if (y->parent == NULL)
            root = x;
        else if (y == y->parent->left)
            y->parent->left = x;
        else
            y->parent->right = x;
        x->right = y;
        y->parent = x;
    }

    // Function to fix violations caused by insertion
    void fixInsert(Node* z) {
        while (z != root && z->parent->color == RED) {
            if (z->parent == z->parent->parent->left) {
                Node* y = z->parent->parent->right;
                if (y != NULL && y->color == RED) {
                    z->parent->color = BLACK;
                    y->color = BLACK;
                    z->parent->parent->color = RED;
                    z = z->parent->parent;
                } else {
                    if (z == z->parent->right) {
                        z = z->parent;
                        leftRotate(z);
                    }
                    z->parent->color = BLACK;
                    z->parent->parent->color = RED;
                    rightRotate(z->parent->parent);
                }
            } else {
                Node* y = z->parent->parent->left;
                if (y != NULL && y->color == RED) {
                    z->parent->color = BLACK;
                    y->color = BLACK;
                    z->parent->parent->color = RED;
                    z = z->parent->parent;
                } else {
                    if (z == z->parent->left) {
                        z = z->parent;
                        rightRotate(z);
                    }
                    z->parent->color = BLACK;
                    z->parent->parent->color = RED;
                    leftRotate(z->parent->parent);
                }
            }
        }
        root->color = BLACK;
    }

    // Function to recursively insert a new node
    void insertRecursive(Node* root, Node* z) {
        Node* y = NULL;
        Node* x = root;
        while (x != NULL) {
            y = x;
            if (z->data < x->data)
                x = x->left;
            else
                x = x->right;
        }
        z->parent = y;
        if (y == NULL)
            root = z;
        else if (z->data < y->data)
            y->left = z;
        else
            y->right = z;
        fixInsert(z);
    }

public:
    RedBlackTree() : root(NULL) {}

    // Function to insert a new node
    void insert(int data) {
        Node* z = new Node(data);
        if (root == NULL) {
            root = z;
            root->color = BLACK; // Root is always black
        } else {
            insertRecursive(root, z);
        }
    }

    // Function to perform in-order traversal
    void inorder(Node* x) {
        if (x != NULL) {
            inorder(x->left);
            cout << x->data << " ";
            inorder(x->right);
        }
    }

    // Function to display in-order traversal
    void displayInOrder() {
        inorder(root);
        cout << endl;
    }
};

int main() {
    RedBlackTree rbTree;
    // Inserting elements
    rbTree.insert(7);
    rbTree.insert(3);
    rbTree.insert(18);
    rbTree.insert(10);
    rbTree.insert(22);
    rbTree.insert(8);
    rbTree.insert(11);
    rbTree.insert(26);

    // Displaying in-order traversal
    cout << "In-order traversal: ";
    rbTree.displayInOrder();

    return 0;
}


// In-order traversal: 3 7 8 10 11 18 22 26