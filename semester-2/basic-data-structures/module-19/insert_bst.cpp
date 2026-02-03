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

    if (root != NULL)
        q.push(root);

    while (!q.empty())

    {
        // === step-1 ===
        Node *p = q.front();
        q.pop();

        // === step-2 ===
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

        p->left = myLeft;
        p->right = myRight;

        // === step-3 ===
        if (p->left != NULL)
        {
            q.push(p->left);
        }
        if (p->right != NULL)
        {
            q.push(p->right);
        }
    }

    return root;
}

void insert(Node *&root, int val)
{
    if (root == NULL)
        root = new Node(val);

    if (root->value > val)
    {
        if (root->left == NULL)
        {
            root->left = new Node(val);
        }
        else
        {
            insert(root->left, val);
        }
    }
    else
    {
        if (root->right == NULL)
        {
            root->right = new Node(val);
        }
        else
        {
            insert(root->right, val);
        }
    }
}

void level_order_traversal(Node *root)
{
    queue<Node *> q;
    q.push(root);

    // travers until q is not empty
    while (!q.empty())
    {
        // step-1
        Node *f = q.front();
        q.pop();

        // step-2
        cout << f->value << " ";

        // step-3
        if (f->left != NULL)
        {
            q.push(f->left);
        }
        if (f->right != NULL)
        {
            q.push(f->right);
        }
    }
}

int main()
{
    Node *root = binary_tree_input();
    int val;
    cin >> val;

    insert(root, val);
    level_order_traversal(root);

    return 0;
}

// 10 6 23 -1 9 19 29 7 -1 12 -1 -1 35 -1 -1 -1 -1 -1 -1
// 15