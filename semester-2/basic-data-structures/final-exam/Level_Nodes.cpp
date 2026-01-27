#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *left;
    Node *right;

    Node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *binary_tree_input()
{
    int val;
    cin >> val;

    Node *root;

    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *parent = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *myLeft, *myRight;

        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        parent->left = myLeft;
        parent->right = myRight;

        if (parent->left != NULL)
            q.push(parent->left);

        if (parent->right != NULL)
            q.push(parent->right);
    }

    return root;
}

int max_depth(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return 0;
    }

    int l = max_depth(root->left);
    int r = max_depth(root->right);

    return max(l, r) + 1;
}

vector<int> level_nodes(Node *root, int x)
{
    vector<int> ans;

    queue<pair<Node *, int>> q;
    if (root)
        q.push({root, 0});

    while (!q.empty())
    {
        pair<Node *, int> parent = q.front();
        q.pop();

        Node *node = parent.first;
        int level = parent.second;

        if (level == x)
        {
            ans.push_back(node->value);
        }

        if (node->left)
            q.push({node->left, level + 1});
        if (node->right)
            q.push({node->right, level + 1});
    }

    return ans;
}

int main()
{
    Node *root = binary_tree_input();
    int x;
    cin >> x;

    int depth = max_depth(root);

    if (x > depth)
    {
        cout << "Invalid";
        return 0;
    }

    vector<int> v = level_nodes(root, x);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    
    return 0;
}