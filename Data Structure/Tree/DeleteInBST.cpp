#include <bits/stdc++.h>
using namespace std;

// Define a structure for a binary tree node
struct Node
{
    int data;
    Node *left, *right;

    // Constructor for creating a new node
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Function to insert a value into a Binary Search Tree
Node *InsertBST(Node *root, int val)
{
    if (root == NULL)
        return new Node(val);
    if (val < root->data)
    {
        root->left = InsertBST(root->left, val);
    }
    else
    {
        root->right = InsertBST(root->right, val);
    }

    return root;
}

// Function to find the node with the minimum value in a BST
Node *inorderSucc(Node *root)
{
    Node *current = root;
    while (current->left != NULL)
    {
        current = current->left;
    }
    return current;
}

// Function to delete a value from a Binary Search Tree
Node *DeleteBST(Node *root, int key)
{
    //search for delete
    if (root == NULL)
    {
        return root;
    }

    if (key < root->data)
    {
        root->left = DeleteBST(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = DeleteBST(root->right, key);
    }
    else
    {
        // case 1 and case 2
        if (root->left == NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }

        // case 3
        Node *temp = inorderSucc(root->right);

        root->data = temp->data;

        root->right = DeleteBST(root->right, temp->data);
    }
    return root;
}

// Function to perform an inorder traversal of the BST
void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    Node *root = NULL;
    int val;

    // User input for constructing the Binary Search Tree
    cout << "Enter values (enter -1 to stop):" << endl;
    while (true)
    {
        cout << "Enter a value: ";
        cin >> val;
        if (val == -1)
            break;
        root = InsertBST(root, val);
    }

    // Display the BST using inorder traversal
    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;

    // Deleting a node from the BST
    cout << "Enter a value to delete: ";
    cin >> val;
    root = DeleteBST(root, val);

    // Display the updated BST using inorder traversal
    cout << "Updated Inorder traversal: ";
    inorder(root);
    cout << endl;

    return 0;
}



// #include <stdio.h>
// #include <stdlib.h>

// typedef struct Node
// {
//     int data;
//     struct Node *left;
//     struct Node *right;
// } Node;

Node *CreateNode(int val)
{
    Node *newnode = (Node *)malloc(sizeof(Node));
    newnode->data = val;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

Node *InsertBST(Node *root, int val)
{
    if (root == NULL)
    {
        return CreateNode(val);
    }
    if (val < root->data)
    {
        root->left = InsertBST(root->left, val);
    }
    else
    {
        root->right = InsertBST(root->right, val);
    }
    return root;
}

Node *InorderSucc(Node *root)
{
    Node *current = root;
    while (current && current->left != NULL)
    {
        current = current->left;
    }
    return current;
}

Node *DeleteBST(Node *root, int val)
{
    if (root == NULL)
    {
        return root;
    }
    if (val < root->data)
    {
        root->left = DeleteBST(root->left, val);
    }
    else if (val > root->data)
    {
        root->right = DeleteBST(root->right, val);
    }
    else
    {
        if (root->left == NULL)
        {
            Node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            free(root);
            return temp;
        }
        Node *temp = InorderSucc(root->right);
        root->data = temp->data;
        root->right = DeleteBST(root->right, temp->data);
    }
    return root;
}

void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

int main()
{
    Node *root = NULL;
    int val;

    printf("Enter values (enter -1 to stop):\n");
    while (1)
    {
        printf("Enter a value: ");
        scanf("%d", &val);
        if (val == -1)
            break;
        root = InsertBST(root, val);
    }

    printf("Inorder traversal: ");
    inorder(root);
    printf("\n");

    printf("Enter a value to delete: ");
    scanf("%d", &val);
    root = DeleteBST(root, val);

    printf("Updated Inorder traversal: ");
    inorder(root);
    printf("\n");

    return 0;
}
