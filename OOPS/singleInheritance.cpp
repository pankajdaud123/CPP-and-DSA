#include<iostream>
using namespace std;

class Parent{
  public:
  Parent(){
    cout<<"parent class"<<endl;
  }

};

class Child: public Parent{
    public:
    Child(){
        cout<<"Child class"<<endl;
    }
};

int main(){
    Child obj1;
}