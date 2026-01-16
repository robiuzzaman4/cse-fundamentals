#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string s;
    Node *next;
    Node *prev;

    Node(string s)
    {
        this->s = s;
        this->next = NULL;
        this->prev = NULL;
    }
};

void push(Node *&head, Node *&tail, string s)
{
    Node *newNode = new Node(s);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        string s;
        cin >> s;
        if (s == "end")
        {
            break;
        }
        push(head, tail, s);
    }

    int q;
    cin >> q;
    cin.ignore();

    Node *cur = head;

    while (q--)
    {
        string s;
        getline(cin, s);

        stringstream ss(s);
        string command;
        ss >> command;

        if (command == "visit")
        {
            string address;
            ss >> address;

            Node *temp = head;
            bool found = false;
            while (temp != NULL)
            {
                if (temp->s == address)
                {
                    cur = temp;
                    cout << cur->s << endl;
                    found = true;
                    break;
                }
                temp = temp->next;
            }
            if (!found)
                cout << "Not Available" << endl;
        }
        else if (command == "prev")
        {
            if (cur->prev != NULL)
            {
                cur = cur->prev;
                cout << cur->s << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "next")
        {
            if (cur->next != NULL)
            {
                cur = cur->next;
                cout << cur->s << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }
    return 0;
}
