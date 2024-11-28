#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<char>st;
    string s = "}{{}}{{{";
    if(s.size()%2==0){
        for(int i = 0;i<s.size();i++){
            char ch = s[i];
            if(ch == '{'){
                st.push(ch);
            }
            else{
                if(!st.empty() && st.top() == '{'){
                    st.pop();
                }
                else{
                    st.push(ch);
                }
            }
        }
    }
    else{
        return -1;
    }
    int ans = 0;
    while(!st.empty()){
        char a = st.top();
        st.pop();
        char b = st.top();
        st.pop();
        if(a==b){
            ans = ans + 1;
        }
        else{
            ans = ans + 2;
        }
    }
    cout << "Answer is : " << ans;
}