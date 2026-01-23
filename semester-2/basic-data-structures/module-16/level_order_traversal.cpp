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
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);

    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;

    level_order_traversal(root); // 10 20 30 40 50 60

    return 0;
}