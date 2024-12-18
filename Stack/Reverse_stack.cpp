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
void reverse(stack<int> &s){
    if(s.empty()){
        return;
    }
    int temp = s.top();
    s.pop();
    reverse(s);
    insertatbottom(s,temp);
}
int main(){

    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    
    reverse(s);

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}