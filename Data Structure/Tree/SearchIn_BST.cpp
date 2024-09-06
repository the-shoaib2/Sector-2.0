#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;

    Node(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

Node *SearchInBST(Node *root, int val)
{
    if (root == nullptr || root->data == val)
    {
        return root;
    }

    if (val < root->data)
    {
        return SearchInBST(root->left, val);
    }
    else
    {
        return SearchInBST(root->right, val);
    }
}

Node *InsertBST(Node *root, int val)
{
    if (root == nullptr)
    {
        return new Node(val);
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

int main()
{
    Node *root = nullptr;

    root = InsertBST(root, 5);
    InsertBST(root, 1);
    InsertBST(root, 3);
    InsertBST(root, 4);
    InsertBST(root, 2);
    InsertBST(root, 7);

    if (SearchInBST(root, 7) != nullptr)
    {
        cout << "Value Exists!!" << endl;
    }
    else
    {
        cout << "Value Doesn't Exist!!" << endl;
    }

    return 0;
}
