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

    Node(int data)
    {
        this -> data = data;
        this -> next = nullptr;
    }
};

void insertathead(Node *&head, Node *&tail,int data)
{
    Node * newnode = new Node(data);
    newnode -> next = head;
    head = newnode;
}

int getlen(Node *&head)
{
    Node *temp = head;
    int count = 0;
    while(temp!=NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

void deletefromend(Node *&head, Node *&tail, int pos)
{
    int len = getlen(head);
    if(pos == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    else if(len == pos)
    {
        Node *
    }
    
}

void print(Node * &head)
{
    Node * temp = head;
    while(temp!=nullptr)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}

int main()
{
    Node * head = new Node(10);

    insertathead(head,tail,20);
    insertathead(head,tail,30);
    insertathead(head,tail,40);
    insertathead(head,tail,50);
    insertathead(head,tail,60);

    print(head);

    return 0;
}