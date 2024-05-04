#include<iostream>
using namespace std;

class Parent{
public:
 virtual void f1()=0; //pure virtual function // abstract class 
  void f2(){
    cout<<"abstract class example "<<endl;
  }

};

class Child:public Parent{
public:
void f1(){
    cout<<"Child function"<<endl;
}

void f2(){

}

};

int main(){
Child obj1;
obj1.f2();
    return 0;
}