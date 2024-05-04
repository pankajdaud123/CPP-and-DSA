#include <bits/stdc++.h>
using namespace std;
int main(){

vector<int>v={1,2,3,4,5};
int n=v.size();
int k=2;
k%n;

reverse(v.begin(),v.end());
reverse(v.begin(),v.begin()+k);
reverse(v.begin()+k,v.end());

for(int a:v){
 cout<<a<<" ";
}cout<<endl;

// int a[]={1,2,3,4,5};
// int n=5;
// int ansarr[5];
// int k=2;
// // if the size of k is greater than n
// k=k%n;
// int j=0;
// // inserting k element in array 
// for(int i=n-k;i<n;i++){
//   ansarr[j++]=a[i];
// }
// //inserting first n-k element in ans aray 
// for(int i=0;i<=k;i++){
//     ansarr[j++]=a[i];
// }
// for(int i=0;i<n;i++){
//     cout<<ansarr[i]<<" ";
// }
// cout<<endl;
return 0;
}