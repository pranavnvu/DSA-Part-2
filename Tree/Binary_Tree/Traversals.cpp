#include<iostream>
#include<queue>
using namespace std;
class Node{
    public : 
        int data;
        Node* left;
        Node* right;

        Node(int data){
            this -> data = data;
            this -> left = NULL;
            this -> right = NULL;
        }
};

Node* Binary_tree(){
    int x;
    // cout << "Enter the value : ";
    cin >> x;

    if(x==-1){
        return NULL;
    }

    Node* temp = new Node(x);

    cout << "Enter the left child : ";
    temp -> left = Binary_tree();

    cout << "Enter the right child : ";
    temp -> right = Binary_tree();

    return temp;
}

void Preorder(Node* root){

    if(root == NULL){
        return;
    }

    cout << root -> data << " ";
    Preorder(root -> left);
    Preorder(root -> right);
}

void Inorder(Node* root){

    if(root == NULL){
        return;
    }

    Inorder(root -> left);
    cout << root -> data << " ";
    Inorder(root -> right);
}

void Postorder(Node* root){

    if(root == NULL){
        return;
    }

    Postorder(root -> left);
    Postorder(root -> right);
    cout << root -> data << " ";
}

int main(){
    Node* root;

    cout << "Enter the root Node : ";
    root = Binary_tree();

    Preorder(root);
    cout << endl;
    Inorder(root);
    cout << endl;
    Postorder(root);

    return 0;
}