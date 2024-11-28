#include<iostream>
using namespace std;
class Stack{
    public : 
        int *arr;
        int size;
        int top;

    Stack(int size){
        arr = new int[size];
        this -> size = size;
        top = -1;
    }
    void push(int data){
        if(size - top > 1){
            top++;
            arr[top] = data;
        }
        else{
            cout << "Stack overflow.";
        }
    }
    void pop(){
        if(top == -1){
            cout << "Stack underflow.";
        }
        else{
            top--;
        }
    }
    int gettop(){
        if(top == -1){
            cout << "There is not element in stack.";
        }
        else{
            return arr[top];
        }
    }
    int getsize(){
        return top+1;
    }
    bool isempty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    Stack s(7);

    s.push(1);

    while(!s.isempty())
    {
        cout << s.gettop() << " ";
        s.pop();
    }
}