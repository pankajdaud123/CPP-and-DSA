#include<iostream>
using namespace std;


class car{
public:
 void  shif_gear(){
    cout<<" gear box of car"<<endl;
    }

// void f2(){

// } /overloading happen if function are in the same class 

void f2(int x){

} // function overloading as function in same class
};


class sportCar:public car{
public:
   void  shif_gear(){
    cout<<" gear box of sport car"<<endl;
    } // overriding 
   void f2(int n){} // method Hiding 


};


int main()
{    
    sportCar s;
    s.shif_gear();


 return 0;
}