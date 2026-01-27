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

void print_left(Node *root)
{
    if (root == NULL)
        return;

    if (root->left)
        print_left(root->left);
    else if (root->right)
        print_left(root->right);

    cout << root->value << " ";
}

void print_right(Node *root)
{
    if (root == NULL)
        return;

    cout << root->value << " ";

    if (root->right)
        print_right(root->right);
    else if (root->left)
        print_right(root->left);
}

int main()
{
    Node *root = binary_tree_input();
    if (root == NULL)
        return 0;

    if (root->left)
        print_left(root->left);

    cout << root->value << " ";

    if (root->right)
        print_right(root->right);

    return 0;
}
