#include<iostream>
using namespace std;

class Complex{

    private:
    int a;
    int b;
    public:
    void set_data(int x, int y){
     a=x;
     b=y;
    }
    void showData(){
        cout<<"a="<<a<<endl<<"b="<<b<<endl;
    }

   Complex operator+(Complex c){
    Complex temp;
    temp.a=a+c.a;
    temp.b=b+c.b;

    return temp;
   }
};

int main(){

Complex c1,c2,c3;

c1.set_data(2,5);
c2.set_data(6,8);
// c3=c1.add(c2) //same meaning 
// c3=c1.operator+(c2) // same meaning // rule because our c3 is complex type so we made complex function and argument is also a complex obj so create the comple parameter
c3=c1+c2;
c3.showData();

    return 0;
}