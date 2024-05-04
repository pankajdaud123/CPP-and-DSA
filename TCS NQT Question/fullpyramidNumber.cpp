#include<bits/stdc++.h>
using namespace std;

int main(){
int row;
int cnt=0;
int cnt1=0;
cout<<"Enter the row"<<endl;
cin>>row;


for(int i=1;i<=row;i++){
int  k=0;

for(int space=1;space<=row-i;space++){
cout<<"  ";
cnt++;
}

while(k!= 2*i-1){
  

   if(cnt<= row-1){
    cout<<i+k<<" ";
    cnt++;
   }
   else{
   cnt1++;
   cout<<(i+k-2*cnt1)<<" ";

   }
   k++;
}
cnt=cnt1=0;
cout<<endl;
}
    return 0;
}