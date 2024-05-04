#include<bits/stdc++.h>
using namespace std;

void insertBottom(stack<int>&s,int p){
    // base case
    if(s.empty()){
        s.push(p);
        return;
    }
    int num=s.top();
    s.pop();
    // recursive call 
    insertBottom(s,p);
    s.push(num);
}


int main(){
    int push=9;
stack<int>st;
st.push(2);
st.push(4);
st.push(5);
st.push(6);
st.push(7);
st.push(8);
insertBottom(st,push);
while(!st.empty()){
cout<<st.top()<<endl;
st.pop();
}
    return 0;
}