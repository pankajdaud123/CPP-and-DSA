#include <bits/stdc++.h>
using namespace std;
void printArray(int a[],int n){
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";

}
cout<<endl;
}
int sort01(int a[],int n){
int i=0;
int j=n-1;

while(i<j){
   
  while(a[i]==0&&i<j){
    i++;
  }
 while(a[j]==1&&i<j){
    j--;
 }

// now if the a[i]=1,a[j]=j;
if(i<j){

swap(a[i],a[j]);
i++;
j--;
}



}
}


int main(){
int a[]={0,1,0,1,0,1};
int n= sizeof a/sizeof(0);
sort01(a,n);
printArray(a,n);
 
 

return 0;
}