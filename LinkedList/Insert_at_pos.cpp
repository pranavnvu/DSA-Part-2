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

void insertathead(Node *&head,int data)
{
    Node * newnode = new Node(data);
    newnode -> next = head;
    head = newnode;
}

int length(Node * &head)
{
    int len = 0;
    Node * temp = head;
    while(temp != NULL)
    {
        temp = temp -> next;
        len++;
    }
    return len;
}

void insertatpos(Node * &head,int data,int pos)
{
    int i = 1;
    Node * newnode = new Node(data);
    Node * prev = head;
    int len = length(head);
    if(pos <= len)
    {
        if(pos == i)
        {
            insertathead(head,data);
        }
        else
        {
            while(i < (pos-1))
            {
                prev = prev -> next;
                i++;
            }
            Node * curr = prev -> next;
            newnode -> next = curr;
            prev -> next = newnode;
        }
    }
    else
    {
        cout << "Position out of length for : " << data << endl;
    }
}

void print(Node * &head)
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
    Node * head = new Node(10);

    insertathead(head,30);
    insertathead(head,40);
    insertathead(head,50);
    insertathead(head,60);

    insertatpos(head,20,10);

    print(head);

    return 0;
}