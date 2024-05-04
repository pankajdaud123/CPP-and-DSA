#include <iostream>
#include<stack>
using namespace std;
int main(){
stack<string> s;

s.push("john");
s.push("joe");
s.push("rock");

cout<<"top elelemt:- "<<s.top()<<endl;
s.pop();
cout<<"top elelemt:- "<<s.top()<<endl;

cout<<"size:"<<s.size()<<endl;

cout<<"Empty or not:"<<s.empty();



return 0;
}