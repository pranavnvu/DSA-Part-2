#include<iostream>
#include<stack>
using namespace std;
void sort(stack<int> &s, int target){
    if(s.top() < target){
        s.push(target);
        return;
    }
    int temp = s.top();
    s.pop();
    sort(s,target);
    s.push(temp);
}
int main(){

    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(4);
    s.push(6);
    s.push(8);

    int target = 5;

    sort(s,target);

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}