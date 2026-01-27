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

int sum_without_leaf(Node *root)
{
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 0;

    int l = sum_without_leaf(root->left);
    int r = sum_without_leaf(root->right);
    int sum = l + r + root->value;

    return sum;
}

int main()
{
    Node *root = binary_tree_input();

    int sum = sum_without_leaf(root);

    cout << sum;

    return 0;
}