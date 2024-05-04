#include<bits/stdc++.h>
using namespace std;
void deleteMiddlele(stack<int>&s,int count, int size ){
    // base case
    if(count==size/2){
        s.pop();
        return ;
    }
    int num=s.top();
    s.pop();
    // recursive call
    deleteMiddlele(s,count+1,size);
    s.push(num);
}
int main(){
int n;
int count=0; 
stack<int>st;
st.push(2);
st.push(4);
st.push(5);
st.push(6);
st.push(7);
st.push(8);
n=6;
deleteMiddlele(st,count,n);
while(!st.empty()){
cout<<st.top()<<endl;
st.pop();
}


    return 0;
}