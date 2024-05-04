#include <bits/stdc++.h>
using namespace std;
int intersection(int a[],int arr[],int n, int m){
int i=0;
int j=0;
while(i<n && j<m){
 if(a[i]==arr[j]){
 cout<<i<<" ";
  i++;
  j++;
}
else if(a[i]<arr[j]){
  i++;
}
else{
    j++;
}
}
return 0;
}
int main(){
int a[]={1,3,5,8,9};
int arr[]={1,2,5,8};
int n=sizeof a/ sizeof(int);
int m=sizeof arr/ sizeof(int);
intersection(a,arr,n,m);
return 0;
}
// 0.09486
