#include<bits/stdc++.h>
using namespace std;


int main(){
  int row;;
  cout<<"Enter the row"<<endl;
  cin>>row;
  for(int i=1;i<=row;i++){
   int  k=0;
   for(int space=1;space<=row-i;space++){
    cout<<"  "; 
   }
   
   while(k != 2*i-1){
    cout<<"* ";
    k++;
   }
   cout<<endl;
  }

    return 0;
}