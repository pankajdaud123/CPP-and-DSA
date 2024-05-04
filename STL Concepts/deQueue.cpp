#include <iostream>
#include <deque>
using namespace std;
int main(){
deque<int>d;
//push from back and front
d.push_back(1);
d.push_front(2);
d.push_back(5);
d.push_front(8);
d.push_back(7);
d.push_front(3);
cout<<"At push:";
for(int i:d){
cout<<i<<" ";
}cout<<endl;
//pop from back and front
// d.pop_front();
// d.pop_back();
// cout<<"At pop";
// for(int i:d){
// cout<<i<<" ";
// }cout<<endl;

cout<<"directly accecing element:"<<d.at(2)<<endl;

cout<<"element at first:"<<d.front()<<endl;;

cout<<"element at back:"<<d.back()<<endl;;

cout<<"Empty or not:"<<d.empty()<<endl;



cout<<"before erase size:"<<d.size()<<endl;
d.erase(d.begin(),d.begin()+2);
cout<<"after erase size:"<<d.size()<<endl;
for(int i:d){
cout<<i<<" ";
}
cout<<endl;

return 0;
}