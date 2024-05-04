#include <bits/stdc++.h>
using namespace std;

class Parent{
public:
Parent (){
    cout<<"parent Class"<<endl;
}
};
class Child1:public Parent{
public:

Child1 (){
  cout<<"Child Class"<<endl;
  }
};
class Child2:public Parent{
public:

Child2(){
  cout<<"GrandChild Class"<<endl;

  }
};




int main(){
Child1 obj;
Child2 obj1;
return 0;
}