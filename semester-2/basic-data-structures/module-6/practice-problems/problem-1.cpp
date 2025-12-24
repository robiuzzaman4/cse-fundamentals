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
        cout << temp->value << " ";
        temp = temp->next;
    }
}

int getSize(Node *head)
{
    int count = 0;
    Node *current = head;
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
        {
            break;
        }

        insert_at_tail(head, tail, value);
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;

    int value2;
    while (true)
    {
        cin >> value2;
        if (value2 == -1)
        {
            break;
        }

        insert_at_tail(head2, tail2, value2);
    }

    int node1_size = getSize(head);
    int node2_size = getSize(head2);

    if (node1_size == node2_size)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}