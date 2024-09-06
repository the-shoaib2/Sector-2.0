#include <bits/stdc++.h>
using namespace std;

// Define the tree node structure using typedef
typedef struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
} TreeNode;

// Depth-First Search (DFS) on Trees
// Time Complexity: O(V + E), where V is the number of vertices (nodes) and E is the number of edges in the tree
void dfs(TreeNode *root)
{
    if (root == NULL)
        return;
    // Process the current node
    cout << root->val << " ";
    // Recursively visit the left subtree
    dfs(root->left);
    // Recursively visit the right subtree
    dfs(root->right);
}

// Breadth-First Search (BFS) on Trees
// Time Complexity: O(V + E), where V is the number of vertices (nodes) and E is the number of edges in the tree
void bfs(TreeNode *root)
{
    if (root == NULL)
        return;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        TreeNode *curr = q.front();
        q.pop();
        // Process the current node
        cout << curr->val << " ";
        // Enqueue left child if exists
        if (curr->left != NULL)
            q.push(curr->left);
        // Enqueue right child if exists
        if (curr->right != NULL)
            q.push(curr->right);
    }
}

int main()
{
    // User input for constructing the tree
    int n;
    cin >> n;
    vector<int> elements(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> elements[i];
    }

    // Construct the tree based on user input
    TreeNode *root = NULL;
    stack<pair<TreeNode **, int>> st;
    st.push({&root, INT_MAX});
    for (int val : elements)
    {
        TreeNode **node;
        int last_val;
        while (val > (last_val = st.top().second))
        {
            st.pop();
        }
        node = st.top().first;
        st.push({&((*node)->right), val});
        *node = new TreeNode(val);
        node = &((*node)->left);
        *node = NULL;
        st.push({node, val});
    }

    // Perform DFS traversal
    cout << "DFS Traversal: ";
    dfs(root);
    cout << endl;

    // Perform BFS traversal
    cout << "BFS Traversal: ";
    bfs(root);
    cout << endl;

    return 0;
}
