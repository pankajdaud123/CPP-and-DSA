 /*friend function dclareration accesses*/
 #include<iostream>
 using namespace std;

 class Complex{
    private:
    int a;
    int b;
    public:
    void setData(int x,int y){
        a=x;
        b=y;
    }
    void print(){
        cout<< "\na="<<a<<"\nb="<<b<<endl;
    }
   friend void friend_function(Complex);//cannot acces directly access throut class
    
 };

void friend_function(Complex c){
    cout<<"sum="<<c.a+c.b<<endl;
 }
 int main(){
 Complex c1,c2,c3;
 c1.setData(2,3);
 c1.print();
 friend_function(c1);// friend function required the object sp that it identify the which value is taken which value is set according to the object 
    return 0;
 }