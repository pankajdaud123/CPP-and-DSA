#include <iostream>
#include<stack>
using namespace std;
string reverseString(string s){
string ans="";
stack<char>st;

for(int i=0;i<s.size();i++){
    st.push(s[i]);
}
while(!st.empty()){
    ans.push_back(st.top());
    st.pop(); 
}

return ans;
}
int main(){
string s;
cin>>s;
cout<<reverseString(s);

return 0;
}