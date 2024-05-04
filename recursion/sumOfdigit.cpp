#include<iostream>
using namespace std;
int sumOfDigit(int n){
  if(n==0){
    return 0;
  }
 int ans=0;
  ans= n%10+sumOfDigit(n/10);
return ans;
}

//or


int sumOfDigitupdated(int n){

    if(n>=0 && n<=9){

        return n;
    }

    return sumOfDigitupdated(n/10)+(n%10);

}


int main(){

int n;
cin>>n;

cout<<sumOfDigit(n);


return 0;

}