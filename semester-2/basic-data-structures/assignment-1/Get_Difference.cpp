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

void insert_at_tail(Node *&head, Node *&tail, long long int value)
{
    Node *new_node = new Node(value);

    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
    }
    else
    {
        tail->next = new_node;
        tail = new_node;
    }
}

int find_max(Node *head)
{
    long long int max_number = head->value;

    for (Node *temp = head; temp->next != NULL; temp = temp->next)
    {
        long long int inside_max = max(temp->value, temp->next->value);
        if (inside_max > max_number)
        {
            max_number = inside_max;
        }
    }

    return max_number;
}

int find_min(Node *head)
{
    long long int min_number = head->value;

    for (Node *temp = head; temp->next != NULL; temp = temp->next)
    {
        long long int inside_min = min(temp->value, temp->next->value);
        if (inside_min < min_number)
        {
            min_number = inside_min;
        }
    }

    return min_number;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    long long int val;

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }

        insert_at_tail(head, tail, val);
    }

    long long int max_number = find_max(head);
    long long int min_number = find_min(head);
    long long int diff = max_number - min_number;

    cout << diff;

    return 0;
}
