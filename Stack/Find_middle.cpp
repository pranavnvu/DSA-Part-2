#include<iostream>
#include<stack>
using namespace std;
void middle(stack<int> &s, int &size){
    if(s.size() == size/2 + 1){
        cout << "Middle element is : " << s.top();
    }
    
    int temp = s.top();
    s.pop();
    middle(s,size);
    s.push(temp);
}
int main(){

    stack <int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    int size = s.size();
    middle(s,size);
    
    return 0;
}