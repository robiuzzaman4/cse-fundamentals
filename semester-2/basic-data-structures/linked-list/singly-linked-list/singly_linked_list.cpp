#include <bits/stdc++.h>
using namespace std;

// === Node Class ===
class Node
{
public:
    int value;
    Node *next;

    // === constructor to create new node (next ptr is by default NUll) ===
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

// === LinkedList Class ===
class LinkedList
{
private:
    // === pointer to the head of the list ===
    Node *head;

public:
    // === constructor to initialize an empty list ===
    LinkedList()
    {
        head = NULL;
    }

    // === function to push node at the start ===
    void push_front(int value)
    {
        // create new node with this value
        Node *newNode = new Node(value);

        newNode->next = head; // link new node to the current list

        head = newNode;
    }

    // === function to push node at the end ===
    void push_back(int value)
    {
        // create new node with this value
        Node *newNode = new Node(value);

        // if list is empty, make newNode the head
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;

            // traverse to the last node
            while (temp->next != NULL)
            {
                temp = temp->next;
            }

            // link the last node to newNode
            temp->next = newNode;
        }
    }

    // === function to push node at a specific position ===
    void push_at(int value, int pos)
    {
        // if pos is 0, use existing push_front logic
        if (pos == 0)
        {
            push_front(value);
            return;
        }

        Node *newNode = new Node(value);
        Node *temp = head;

        // traverse to find the node at index (pos - 1)
        for (int i = 0; i < pos - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "Position out of bounds!" << endl;
                delete newNode; // clean up memory
                return;
            }
            temp = temp->next;
        }

        // connect newNode to the rest of the list first
        newNode->next = temp->next;

        // connect temp to newNode
        temp->next = newNode;
    }

    // === function to pop(remove) node from start ===
    void pop_front()
    {
        if (head == NULL)
        {
            cout << "List is already empty!" << endl;
            return;
        }

        Node *temp = head;
        head = head->next;
        delete temp;
    }

    // === function to pop(remove) node from the end ===
    void pop_back()
    {
        if (head == NULL)
            return;

        // only one node in list
        if (head->next == NULL)
        {
            delete head;
            head = NULL;
            return;
        }

        Node *temp = head;

        // traverse until temp is the second-to-last node
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }

        delete temp->next; // delete the last node
        temp->next = NULL; // set second-to-last node's next to NULL
    }

    // === function to pop(remove) node from a specific position ===
    void pop_at(int pos)
    {
        if (head == NULL)
            return;

        if (pos == 0)
        {
            pop_front();
            return;
        }

        Node *temp = head;

        // find the node at (pos - 1)
        for (int i = 0; i < pos - 1; i++)
        {
            if (temp->next == NULL)
            {
                cout << "Position out of bounds!" << endl;
                return;
            }
            temp = temp->next;
        }

        // Node to be deleted
        Node *target = temp->next;
        if (target == NULL)
            return; // case where pos is exactly at the end

        // link previous node to the one AFTER the target
        temp->next = target->next;

        delete target; // free memory
    }

    // === function to display list ===
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->value << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    LinkedList list;

    list.push_back(10);   // 10->NULL
    list.push_front(50);  // 50->10->NULL
    list.push_front(500); // 500->50->10->NULL
    list.push_back(20);   // 500->50->10->20->NULL
    list.push_back(80);   // 500->50->10->20->80->NULL
    list.push_back(40);   // 500->50->10->20->80->40->NULL
    list.push_at(100, 3); // 500->50->10->100->20->80->40->NULL

    list.display(); // 500->50->10->100->20->80->40->NULL

    list.pop_back();  // 500->50->10->100->20->80->NULL
    list.pop_front(); // 50->10->100->20->80->NULL
    list.pop_at(3);   // 50->10->100->80->NULL

    list.display(); // 50->10->100->80->NULL

    return 0;
}