#include<iostream>
#include<stack>
using namespace std;
int getprec(char c){
    if(c=='^'){
        return 3;
    }
    else if(c=='*' || c=='/'){
        return 2;
    }
    else if(c=='-' || c=='+'){
        return 1;
    }
    else{
        return -1;
    }
}
string infixtopostfix(string s){
    string ans = "";
    stack<char> st;

    for(int i = 0;i<s.size();i++){
        if(s[i] > 'a' && s[i] < 'z' || s[i] > 'A' && s[i] < 'Z'){
            ans += s[i];
        }
        else if(s[i] == '('){
            st.push(s[i]);
        }
        else if(s[i] == ')'){
            while(!st.empty() && st.top() != '('){
                st.pop();
            }
        }
        else if(!st.empty() && getprec(st.top()) > getprec(s[i])){
            ans += st.top();
            st.pop();
        }
        st.push(s[i]);
    }
    while(!st.empty()){
        ans += st.top();
        st.pop();
    }
    return ans;
}
int main(){
    string s = "(a-b+c)*(d*e+f)";
    cout << "Original string is : " << s << endl;
    cout << "Infix to Postfix is : " << infixtopostfix(s);
    return 0;
}