#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

int main()
{
    Node a(10), b(220), c(330);

    a.next = &b;
    b.next = &c;

    cout << "a = " << a.value << endl;
    cout << "b = " << a.next->value << endl;
    cout << "c = " << a.next->next->value << endl;

    return 0;
}