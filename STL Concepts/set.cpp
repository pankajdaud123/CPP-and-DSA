#include <iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;

s.insert(5);
s.insert(5);
s.insert(4);
s.insert(5);
s.insert(3);
s.insert(5);
s.insert(2);
s.insert(0);
s.insert(1);
    
for(auto i:s){
    cout<<i<<" ";
}cout<<endl;


set<int>::iterator it=s.begin();
it++;

s.erase(it);

for(auto i:s){
    cout<<i<<" ";
}cout<<endl;

cout<<" tell us present or not ->>"<<s.count(10);
cout<<endl;

set<int>::iterator itr=s.find(3);

for(auto it=itr; it!=s.end();it++){
    cout<<*it<<" ";
}


return 0;
}