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
        return 1;
    }

    int l = max_depth(root->left);
    int r = max_depth(root->right);

    return max(l, r) + 1;
}

int count_nodes(Node *root)
{
    if (root == NULL)
        return 0;

    int sum = count_nodes(root->left) + count_nodes(root->right) + 1;
    return sum;
}

int main()
{
    Node *root = binary_tree_input();

    int depth = max_depth(root);
    int expected_nodes = pow(2, depth) - 1;
    int total_nodes = count_nodes(root);

    if (expected_nodes == total_nodes)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}