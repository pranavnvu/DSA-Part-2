#include<iostream>
using namespace std;
class Node
{
    public :
        int data;
        Node * next;
    
    Node()
    {
        this -> data = 0;
        this -> next = NULL;
    }

    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }
};

void insertathead(Node *&head, int data)
{
    Node * newnode = new Node(data);
    newnode -> next = head;
    head = newnode;
}

void insertattail(Node *&tail,int data)
{
    Node * newnode = new Node(data);
    tail -> next = newnode;
    tail = newnode;
}

void print(Node * & head)
{
    Node * temp = head;
    while(temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }    
}

int main()
{
    Node * node1 = new Node(10);
    Node * head = node1;
    Node * tail = node1;
    // insertathead(head,20);
    // insertathead(head,30);
    // insertathead(head,40);
    // insertathead(head,50);
    insertattail(tail,20);
    insertattail(tail,30);
    insertattail(tail,40);
    insertattail(tail,80);
    print(head);

    return 0;
}