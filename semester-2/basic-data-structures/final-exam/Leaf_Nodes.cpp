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

void leaf_nodes(Node *root, vector<int> &v)
{
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL)
    {
        v.push_back(root->value);
        return;
    }

    leaf_nodes(root->left, v);
    leaf_nodes(root->right, v);
}

int main()
{
    Node *root = binary_tree_input();
    if (root == NULL)
        return 0;

    vector<int> v;

    leaf_nodes(root, v);

    sort(v.begin(), v.end(), greater<int>());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}