#include <stdio.h>
#include <stdlib.h>

// Define a structure for a binary tree node
struct Node
{
    int data;
    struct Node *left, *right;
};

// Function to create a new node
struct Node* createNode(int val)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a value into a Binary Search Tree
struct Node* InsertBST(struct Node* root, int val)
{
    if (root == NULL)
    {
        return createNode(val);
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

// Function to perform an inorder traversal of the BST
void inorder(struct Node* root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

// Function to perform a preorder traversal of the BST
void preorder(struct Node* root)
{
    if (root == NULL)
    {
        return;
    }
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

// Function to perform a postorder traversal of the BST
void postorder(struct Node* root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

int main()
{
    struct Node* root = NULL;
    int val;

    // User input for constructing the Binary Search Tree
    printf("Enter values (enter -1 to stop)\n");
    while (1)
    {
        printf("Enter a value: ");
        scanf("%d", &val);
        if (val == -1)
            break;
        root = InsertBST(root, val);
    }

    // Display the BST using inorder traversal
    printf("Inorder traversal: ");
    inorder(root);
    printf("\n");

    // Display the BST using preorder traversal
    printf("Preorder traversal: ");
    preorder(root);
    printf("\n");

    // Display the BST using postorder traversal
    printf("Postorder traversal: ");                                
    postorder(root);
    printf("\n");

    return 0;
}



// #include <iostream>

// using namespace std;

// // Define a structure for a binary tree node
// struct Node
// {
//     int data;
//     Node *left, *right;
//     // Constructor for creating a new node
//     Node(int val)
//     {
//         data = val;
//         left = nullptr;
//         right = nullptr;
//     }
// };

// // Function to insert a value into a Binary Search Tree
// Node *InsertBST(Node *root, int val)
// {
//     if (root == nullptr)
//     {
//         return new Node(val);
//     }
//     if (val < root->data)
//     {
//         root->left = InsertBST(root->left, val);
//     }
//     else
//     {
//         root->right = InsertBST(root->right, val);
//     }

//     return root;
// }

// // Function to perform an inorder traversal of the BST
// void inorder(Node *root)
// {
//     if (root == nullptr)
//     {
//         return;
//     }
//     inorder(root->left);
//     cout << root->data << " ";
//     inorder(root->right);
// }

// // Function to perform a preorder traversal of the BST
// void preorder(Node *root)
// {
//     if (root == nullptr)
//     {
//         return;
//     }
//     cout << root->data << " ";
//     preorder(root->left);
//     preorder(root->right);
// }

// // Function to perform a postorder traversal of the BST
// void postorder(Node *root)
// {
//     if (root == nullptr)
//     {
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout << root->data << " ";
// }

// int main()
// {
//     Node *root = nullptr;
//     int val;

//     // User input for constructing the Binary Search Tree
//     cout << "Enter values (enter -1 to stop)" << endl;
//     while (true)
//     {
//         cout << "Enter a value: ";
//         cin >> val;
//         if (val == -1)
//             break;
//         root = InsertBST(root, val);
//     }

//     // Display the BST using inorder traversal
//     cout << "Inorder traversal: ";
//     inorder(root);
//     cout << endl;

//     // Display the BST using preorder traversal
//     cout << "Preorder traversal: ";
//     preorder(root);
//     cout << endl;

//     // Display the BST using postorder traversal
//     cout << "Postorder traversal: ";
//     postorder(root);
//     cout << endl;

//     return 0;
// }
