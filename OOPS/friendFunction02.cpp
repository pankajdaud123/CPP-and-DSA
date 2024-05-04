/*friend function can acces the multiple private variable */
#include <bits/stdc++.h>
using namespace std;
class B;
class  A{
 private:
 int a;
 public:
 void setData(int x){
    a=x;
 }
 friend func1(A,B);
};
class B{
  private:
  int b;
  public:
  void setData(int y){
   b=y;
  }
    friend func1(A,B);
};

func1(A o1,B o2){
   cout<<"sum="<<o1.a+o2.b<<endl;
}

int main(){
A obj1;
B obj2;
obj1.setData(3);
obj2.setData(5);
func1(obj1,obj2);
return 0;
}