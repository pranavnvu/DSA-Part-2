#include<iostream>
using namespace std;
class node{
    public : 
        int data;
        node* next;
    node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
void insertathead(node* &head, int data){
    node* newnode = new node(data);
    newnode -> next = head;
    head = newnode;
}
int getlen(node* &head){
    node* temp = head;
    int count = 0;
    while(temp != NULL){
        temp = temp -> next;
        count++;
    }
    return count;
}
node* necklace(node* head, int k){
    int length = getlen(head);
    node* temp = head;
    if(length != 0)
    k = k%length;
    for(int i = 0;i<(length-k-2);i++){
        temp = temp -> next;
    }
    node* newhead = temp -> next;
    temp -> next = NULL;
    node* it = newhead;
    while(it -> next){
        it = it -> next;
    }
    it -> next = head;
    return newhead;
}
void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next; 
    }
}
int main(){
    node* head = new node(10);
    insertathead(head,20);
    insertathead(head,30);
    insertathead(head,40);
    insertathead(head,50);

    print(head);
    cout << endl;
    int k = 2;
    node* newhead= necklace(head,k);
    print(newhead);
}