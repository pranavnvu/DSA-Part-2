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
int getlen(node *&head){
    node *temp = head;
    int count = 0;
    while(temp!=NULL){
        temp = temp -> next;
        count++;
    }
    return count;
}
void insertathead(node *&head, int data){
    node* newnode = new node(data);
    newnode -> next = head;
    head = newnode;
}
void findkth(node* &head,int pos){
    node * prev = head;
    int len = getlen(head);
    int i = 1;
    while(i <= (len-pos-1)){
        prev = prev -> next;
        i++;
    }
    cout << endl;
    cout << prev -> data;
}
void print(node *&head){
    node* temp = head;
    while(temp!=NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}
int main(){
    node *head = new node(10);
    insertathead(head,20); 
    insertathead(head,30); 
    insertathead(head,40); 
    insertathead(head,50); 

    print(head);

    findkth(head,2);

    return 0;
}