#include<iostream>
using namespace std;
class node{
    public :
        int data;
        node * next;
    node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
void insertathead(node *&head, int data){
    node* newnode = new node(data);
    newnode -> next = head;
    head = newnode;
}
void intersection(node* &head1, node* &head2){
    
}
void print(node *&head){
    node* temp = head;
    while(temp!=NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}
int main(){
    node *head1 = new node(10);
    insertathead(head1,20); 
    insertathead(head1,30); 
    insertathead(head1,40); 
    insertathead(head1,50); 

    cout << "LL 1st is : ";
    print(head1);

    cout << endl;

    node *head2 = new node(10);
    insertathead(head2,20); 
    insertathead(head2,60); 
    insertathead(head2,40); 
    insertathead(head2,70); 

    cout << "LL 2nd is : ";
    print(head2);

    cout << "Intersection of LL is : ";
    intersection(head1,head2);

    return 0;
}