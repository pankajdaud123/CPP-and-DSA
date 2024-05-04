#include <bits/stdc++.h>
using namespace std;
int main(){
 int N,M;
  int result1=0;
  int result2=0;
 cin>>N>>M;
 for(int i=1;i<N;i++){
    if(N%i==0){
  result1= result1+i;
    }
 }
    for(int i=1;i<M;i++){
    if(M%i==0){
  result2 =result2+i;
    }
 }
 if(result1!=M && result2!=N){
    cout<<"No"<<endl;
 }
else
 cout<<"Yes"<<endl;
return 0;
} 