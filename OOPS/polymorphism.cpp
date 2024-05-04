//  ability of object / method to take a different form

/* two type of polymorphism 
    1. compile Time polymorphism
    2. runtime time polymorphism*/

// compile time polymorphism 

// 1.function overloading 

/* define a number of function with same function name but they perfomed differently accordingly to how many argumment passed */
//   example

#include <iostream>
using namespace std;
class Sum{

public:

void add(int a , int b){
    cout<<a+b<<endl;
}

void add(int a , int b, int c){
    cout<<a+b+c<<endl;
}

void add(int a , int b, int c, int d){
    cout<<a+b+c+d<<endl;
}

};

int main(){

  Sum s;
  s.add(2,3);
  s.add(2,3,4);
  s.add(2,3,4,5);

    return 0;
}

// 2.operator Overloading

