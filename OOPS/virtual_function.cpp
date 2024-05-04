#include <bits/stdc++.h>
using namespace std;

class A{
    public:
    virtual void f1(){}// use at overriding 
    //do the late binding instead of calling it compile timme 
    // it liked it runtime;
};

class B:public A{
public:
void f1(){} //function overriding 
};
int main(){

A *p,obj1;
B obj2;
p=&obj2;
p->f1();
return 0;
}