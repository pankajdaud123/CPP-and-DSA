#include <bits/stdc++.h>
using namespace std;
// int uniqueNumber(int a[],int n){
// int ans;
//    for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//      if(a[i]!=a[j])
//        ans=a[i];
//        }
//    }
//   return ans ;
// }

int  uniqueNumber(int a[],int n){
  int ans;
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
    if(a[i]==a[j]){
      a[i]=a[j]=-1;
    }
   }
    }
   for(int i=0;i<n;i++){
     if(a[i]>-1)
        ans=a[i];
     
   }
 return ans;
}

int main(){
int a[]={2,3,2,1,3,4,4,5,1};
cout<<uniqueNumber(a,9);
return 0;
}