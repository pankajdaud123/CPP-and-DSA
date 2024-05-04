#include <bits/stdc++.h>
using namespace std;
long long power(int x,int n){
  long long ans=1;

  for(int i=0;i<n;i++){
    ans=ans*x;

  }
  return ans;

}
bool isArmstrong(long long  n){
long long  count=0;
long long  num=n;
// count the digit 
long long temp=n;
while(temp!=0){
    temp/=10; 
    count++; 
}

long long  sum=0;
while(num!=0){
 sum+=power(n%10,count);
 n/=10;
 }
 if(sum == n) 
 {return true  ;
 }
   false;
}
int main(){
long long  num;
cin>>num;
int ans=0;
if(isArmstrong(num))
{
  // while(num!=0){
  //   int lastDigit=num%10;
  //   if(lastDigit%2==0){
  //       ans+=num%10;
  //   }
  //   num/=10;
  // }
  cout<<"true"<<endl;
}else {
  // while(num!=0){
  //    int lastDigit=num%10;
  //   if(lastDigit%2!=0){
  //       ans+=num%10;
  //   }
  //   num/=10;
  // }
   cout<<"true"<<endl;
}
// cout<<ans<<endl;
return 0;
}