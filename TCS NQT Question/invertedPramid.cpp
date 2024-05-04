#include<bits/stdc++.h>
using namespace std;

int main(){

int row;
cout<< "Enter the row"<<endl;
cin>>row;

for(int i=row;i>=1;i--){
   for(int j=i;j>=1;j--){
    cout<<"*";
   }
   cout<<endl;
}
    return 0;
}