#include <bits/stdc++.h>
using namespace std;

class Parent{
public:
Parent (){
    cout<<"parent Class"<<endl;
}
};
class Child:public Parent{
public:

Child(){
  cout<<"Child Class"<<endl;
  }
};
class GrandChild:public Child{
public:

GrandChild(){
  cout<<"GrandChild Class"<<endl;

  }
};




int main(){
GrandChild obj;

return 0;
}