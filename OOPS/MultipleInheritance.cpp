#include<iostream>
using namespace std;

class Parent1{ 
    public: 
    Parent1(){
        cout<<"parent1 Class"<<endl;
        }
        };


class Parent2{
    public:
     Parent2(){
        cout<<"parent2 Class"<<endl;
         
         }
};


class Child:public Parent1,public Parent2{
    public: 
      Child(){
        cout<<"Child Class"<<endl;
        }
        

};
int main(){
     Child obj;
   
    return 0;
}