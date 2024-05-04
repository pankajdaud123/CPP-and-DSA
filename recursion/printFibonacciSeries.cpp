#include <bits/stdc++.h>
using namespace std;

 int fnum(int n){
  int result=0;

    if(n==1 || n==2) {
      return 1;
    }
    
    cout<<n<<" ";
    result=fnum(n-1)+(n-2);
   
      
   

 }



int main(){


cout<<fnum(5);

return 0;
}