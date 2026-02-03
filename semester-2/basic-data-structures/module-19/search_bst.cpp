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

bool search(Node *root, int val)
{
    if (root == NULL)
        return false;

    if (root->value == val)
        return true;

    if (val < root->value)
        return search(root->left, val);
    else
        return search(root->right, val);
}

int main()
{
    Node *root = binary_tree_input();
    int val;
    cin >> val;

    if (search(root, val))
        cout << "Found";
    else
        cout << "Not Found";

    return 0;
}

// 18 7 21 -1 12 20 26 9 15 -1 -1 -1 -1 -1 -1 -1 -1
// 15
