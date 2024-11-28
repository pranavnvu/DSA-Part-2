#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack<int> &s, int target){
    if(s.empty()){
        s.push(target);
        return;
    }
    int topele = s.top();
    s.pop();
    insertatbottom(s,target);
    s.push(topele);
}
int main(){

    stack<int>s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    if(s.empty()){
        cout << "Stack is empty.";
        return 0;
    }

    int target = s.top();
    s.pop();
    insertatbottom(s,target);

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}