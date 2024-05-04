#include <iostream>
#include <queue>
using namespace std;
int main(){
queue<string>q;


q.push("john");
q.push("joe");
q.push("rock");

cout<<"Size of queue:"<<q.size()<<endl;

cout<<"The front element of  the queue:"<<q.front()<<endl;

q.pop();
cout<<"The front element of  the queue:"<<q.front()<<endl;
cout<<"Size of queue:"<<q.size()<<endl;


return 0;
}