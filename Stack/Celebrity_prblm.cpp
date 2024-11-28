#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    int arr[3][3] = {{0,1,0},
                     {0,0,0},
                     {0,1,0}};
    for(int i = 0;i<3;i++){
        st.push(i);
    }
    while(st.size()!=1){
        int a = st.top(); st.pop();
        int b = st.top(); st.pop();
        if(arr[a][b]){
            st.push(b);
        }
        else{
            st.push(a);
        }
    }
    int cele = st.top(); st.pop();
    for(int i = 0;i<3;i++){
        if(arr[cele][i]!=0){
            return -1;
        }
    } 
    for(int i = 0;i<3;i++){
        if(arr[i][cele]==0 && i!=cele){
            return -1;
        }
    }
    cout << "Celebrity is : " << cele;
}