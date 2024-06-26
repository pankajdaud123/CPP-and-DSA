#include<iostream>
using namespace std;

// int power(int p,int q){
// if(q==0){
//     return 1;
// }
//  return p*power(p,q-1);
// }

//optimal solution 

int power(int p,int q){
// base case
  if(q==0) return 1;

// recursion call
  if(q%2==0){
    int result = power(p,q/2);
  return  result*result;
  }
  else{
    int result= power(p,(q-1)/2);
 return p*result*result;
  }
}


// babar solution
int power1(int p,int q){
// base case
  if(q==0) return 1;
  if(q==1)  return p;
// recursion call
int result = power(p,q/2);
  if(q%2==0){
    
    return  result*result;
  }
  else{
     return p*result*result;
  }
}

int main(){
int p,q;
cin>>p>>q;

cout<<power1(p,q);

return 0;

}