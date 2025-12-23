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

void insert_at_head(Node *&head, int value)
{
    Node *newNode = new Node(value);

    newNode->next = head;

    head = newNode;
}

void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << endl;
        temp = temp->next;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->next = tail;

    insert_at_tail(head, tail, 500);
    insert_at_tail(head, tail, 600);
    insert_at_tail(head, tail, 700);
    insert_at_tail(head, tail, 800);
    insert_at_tail(head, tail, 900);
    insert_at_tail(head, tail, 1000);

    
    print_linked_list(head);
    
    cout << "tail " << tail->value;
    return 0;
}