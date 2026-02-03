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

Node *convert(int a[], int n, int l, int r)
{
    if (l > r)
        return NULL;

    int mid = (l + r) / 2;

    Node *root = new Node(a[mid]);
    Node *leftRoot = convert(a, n, l, mid - 1);
    Node *rightRoot = convert(a, n, mid + 1, r);

    root->left = leftRoot;
    root->right = rightRoot;

    return root;
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
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    Node *root = convert(a, n, 0, n - 1);
    level_order_traversal(root);

    return 0;
}

// input:
// 6
// 2 5 8 11 15 18
// output:
// 8 2 15 5 11 18 