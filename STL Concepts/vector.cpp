#include <iostream>
#include <vector>
using namespace std;
int main(){
vector<int>v;

vector<int>a(5,1);
vector<int>copy(a);

for(int i:a){
    cout<<i<<" "<<endl;
}
cout<<"Copy element to another vector"<<endl;
for(int i:a){
    cout<<i<<" "<<endl;
}

cout<<"Capacity: "<<v.capacity()<<endl;
// Capacity function in vector 
v.push_back(1);//push back function to push element in an vector;
cout<<"Capacity: "<<v.capacity()<<endl;
v.push_back(2);
cout<<"Capacity: "<<v.capacity()<<endl;
v.push_back(3);
cout<<"Capacity: "<<v.capacity()<<endl;


cout<<"Size:"<<v.size()<<endl;// size of the vector;

//accesing element at specific Number
cout<<"Elemet at index 2:-"<<v.at(2)<<endl;

cout<<"front:"<<v.front()<<endl;
cout<<"back:"<<v.back()<<endl;


// cout<<" before pop"<<endl;
// for(int i:v){
//     cout<<i<<" "<<endl;
// }

// v.pop_back();
// cout<<" after pop"<<endl;
// for(int i:v){
//     cout<<i<<" "<<endl;
// }

cout<<" before clear"<<endl;
for(int i:v){
    cout<<i<<" "<<endl;
}
v.clear();
cout<<" after clear"<<endl;
for(int i:v){
    cout<<i<<" "<<endl;
}

return 0;
}