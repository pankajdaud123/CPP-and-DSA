#include <iostream>
#include <list>
using namespace std;
int main(){
list<int>l;
list<int>n(5,50);
for(int i:n){
    cout<<i<<" "<<endl;
} cout<<endl;


l.push_back(1);
l.push_front(2);
for(int i:l){
    cout<<i<<" "<<endl;
} cout<<endl;


cout<<"element before erase"<<endl;
l.erase(l.begin());
cout<<"element after erase"<<endl;
for(int i:l){
    cout<<i<<" "<<endl;
} cout<<endl;

return 0;
}