#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = NULL;
        tail = NULL;
    }

    void push_front(int value)
    {
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }
    void push_back(int value)
    {
        Node *newNode = new Node(value);
        Node *temp = head;
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            tail = newNode;
            return;
        }
    }
    void pop_front()
    {
        if (head == NULL)
            return;
        else
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
    }
    void pop_back()
    {
        if (head == NULL)
            return;
        else
        {
            Node *temp = head;
            while (temp->next->next != NULL)
            {
                temp = temp->next;
            }
            tail = temp;
            delete temp->next;
            temp->next = NULL;
            return;
        }
    }

    void insert(int value, int position)
    {
        Node *newNode = new Node(value);
        Node *temp = head;
        if (position < 0)
            return;
        if (position == 0)
        {
            push_front(value);
        }
        else
        {
            for (int i = 0; i < position - 1; i++)
            {
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
            return;
        }
    }

    void print()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << endl;
    }
    void search(int value)
    {
        Node *temp = head;
        int position = 0;
        while (temp != NULL)
        {
            if (temp->data == value)
            {
                cout << "Element found at position " << position << endl;
                return;
            }
            position++;
            temp = temp->next;
        }
    }
};

int main()
{
    List ll;
    ll.push_front(0);
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.print();
    ll.insert(6, 1);
    ll.print();
    ll.insert(7, 2);
    ll.print();
    ll.search(7);
}