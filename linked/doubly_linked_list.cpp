#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

class DoublyList
{
    Node *head;
    Node *tail;

public:
    DoublyList()
    {
        head = NULL;
        tail = NULL;
    }
    void push_front(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void print()
    {
        Node *temp = head;
        while (temp != NULL )
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

    void push_back(int data){
        Node * newNode = new Node(data );
        if(head == NULL ){
            head = tail  = newNode ;
        }
        else {
            Node * temp = head ;
            while(temp -> next != NULL ){
                temp = temp -> next ;
            }   

            newNode -> prev = temp ;
            temp -> next = newNode ;
            tail = newNode ;
        }
    }
};

int main()
{
    DoublyList dll;
    dll.push_front(1);
    dll.push_front(2);
    dll.push_front(3);
    dll.push_front(4);
    dll.push_back(5);
    dll.push_back(6);
    dll.push_back(7);
    dll.print();
    return 0 ;
}