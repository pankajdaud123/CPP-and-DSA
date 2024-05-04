#include <iostream>
using namespace std;


class Parent{
public:
int x;

protected:
int y;

private:
int z;

};

class Child1: public Parent{
    // x will remain public
    // y will remain protected
    // z will not be  accesable
};

class Child2: protected Parent{
    // x will be protected
    //  y will be protected
    // z will not be accesable

};

class Child2: protected Parent{
    // x will be protected
    // y will be protected
    // z will not be accesable

};

class Child3:  private Parent{
    // x  will be private
    // y will be private
    // z will not be accesable
} 
int main(){


    return 0;
}