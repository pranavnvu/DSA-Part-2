#include <iostream>
#include<queue>
using namespace std;
class Node{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data){
        this ->  data = data;
        this -> left = NULL;    
        this -> right = NULL;    
    }
};

int main(){
    queue<Node* > q;
    int x,f,s;

    cout << "Enter the value of x : ";
    cin >> x;

    Node* root = new Node(x);

    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        cout << "Enter the first value : ";
        cin >> f;
        if(f!=-1){
            temp -> left = new Node(f);
            q.push(temp->left);
        }
        cout << "Enter the second value : ";
        cin >> s;
        if(s!=-1){
            temp -> right = new Node(s);
            q.push(temp->right);
        }
    }
}