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

   Complex operator-(){
    Complex temp;
    temp.a=-a;
    temp.b=-b;

    return (temp);
   }
};

int main(){

Complex c1,c2;

c1.set_data(2,5);
// c1.showData();
// c2=c1.operator-();
c2=-c1;
c2.showData();

    return 0;
}