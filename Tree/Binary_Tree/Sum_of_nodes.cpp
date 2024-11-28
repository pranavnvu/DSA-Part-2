#include <iostream>
using namespace std;
class Node{
    public:
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

int sum(Node* root){
    if(root == NULL){
        return 0;
    }

    return root -> data + sum(root->left) + sum(root->right);
}

int main(){
    Node* root;

    cout << "Enter the root Node : ";
    root = Binary_tree();

    cout << "Sum of BT is : " << sum(root);

    return 0;
}