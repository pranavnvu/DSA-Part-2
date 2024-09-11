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
        this -> next = nullptr;
    }

    Node (int data)
    {
        this -> data = data;
        this -> next = nullptr;
    }
};

void insertathead(Node * & head, int data)
{
    Node * newnode = new Node(data);
    newnode -> next = head;
    head = newnode;
}

void print(Node * &head)
{
    Node * temp = head;
    while(temp!=NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}

int main()
{
    Node * head = new Node(10);
    insertathead(head,20);
    insertathead(head,30);
    insertathead(head,40);
    insertathead(head,50);
    print(head);
    return 0;
}