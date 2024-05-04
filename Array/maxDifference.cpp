#include<iostream>
using namespace std;


int main(){

int n;
cin>>n;
int a[n]={0};
for(int i=0;i<n;i++){
    cin>>a[i];
}
int mx= 0;
int result=0;
 for(int i=0;i<n;i++){
  result=a[i]-a[i+1];
    mx=max(mx,result);
 }
  cout<<mx<<endl;
    return 0;
}