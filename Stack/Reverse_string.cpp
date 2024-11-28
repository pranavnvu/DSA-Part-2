#include<iostream>
#include<stack>
using namespace std;
int main(){
    
    stack<char>s;
    string st = "pranav";
    for(int i = 0;i<st.size();i++){
        s.push(st[i]);
    }
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}