#include<iostream>
using namespace std;

class Integer{
private:
    int a;
    public:
    void set_data(int x){
     a=x;
    }
    void showData(){
        cout<<"a="<<a<<endl;
    }

   Integer operator ++(){  // preincrement
    Integer i;
    i.a=++a;
    return i;
   }
    Integer operator ++(int){  // postincrement
    Integer i;
    i.a=a++;
    return i;
   }

};
int main(){
Integer i1,i2;
i1.set_data(5);
// i2=i1.operator++();
// that called of preincrement
cout<<"preincrement"<<endl;
i1.showData();
i2= ++i1; 
i2.showData();
cout<<"postincrement"<<endl;
// the called postincrement as per rule  we have to pass int arg in that function 
i2= i1++; 
i1.showData();
i2.showData();


    return 0;
}