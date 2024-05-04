#include <bits/stdc++.h>
using namespace std;

 int fibonacciNumber(int n)

{
    if(n<=1)  return 1;
    
    int result= fibonacciNumber(n-1)+fibonacciNumber(n-2);
     return result;

}
int main(){
int n;
 cin>>n;

 cout<<fibonacciNumber(n);
return 0;
}   