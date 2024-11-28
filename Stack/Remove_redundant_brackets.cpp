#include<iostream>
#include<stack>
using namespace std;
bool redundant(stack<char>s,string st){
    
}
int main(){

    stack<char> s;
    string st = "((a+b))";

    if(redundant(s,st)){
        cout << "True";
    }
    else{
        cout << "False";
    }

    return 0;
}