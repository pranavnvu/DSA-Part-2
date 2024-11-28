#include<iostream>
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

Node* insert(Node* root, int target){
    if(!root){
        Node* temp = new Node(target);
        return temp;
    }
    if(target < root -> data){
        root -> left = insert(root -> left, target);
    }
    else{
        root -> right = insert(root -> right, target);
    }
    return root;
}

bool search(Node* root, int target){
    if(!root){
        return 0;
    }
    if(root -> data == target){
        return 1;
    }
    if(root -> data > target){
        return search(root -> left, target);
    }
    else{
        return search(root -> right, target);
    }
}

int main(){
    int arr[] = {3,7,4,1,6,8};
    Node* root = NULL;
    for(int i=0;i<6;i++){
        root = insert(root,arr[i]);
    }
    int target = 4;
    if(search(root,target)){
        cout << "Yes, target is present.";
    }  
    else{
        cout << "No, target is not present.";
    }
    return 0;
}