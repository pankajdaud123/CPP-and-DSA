#include <bits/stdc++.h>
using namespace std;

bool isPossiblesol(vector<int> v,int n,int m,int mid){

 int pageSum=0;
 int studentcount=1;

 for(int i=0;i<n;i++){
    if(pageSum+v[i]<=mid){
  pageSum +=v[i];
    }
    else{
     studentcount++;
  if(studentcount > m || v[i]>mid){
    return false;
  }
  pageSum =0;
  pageSum +=v[i];

 }

}
return true;
}

int allocateBook(vector<int> v,int n,int m){

    int s=0;
    int sum=0;
    int ans=-1;
    for(int i=0;i<n;i++){
   sum+=v[i];
    }
  int e=sum;
  int mid=s+(e-s)/2;

  while(s<=e){

  if(isPossiblesol(v,n,m,mid)){
    ans=mid;
    e=mid-1;
  }
  else{  
s=mid+1;
  }

 mid=s+(e-s)/2;
  }
  return ans;

}
int main(){
  vector<int>arr={5,5,5,5};
  int n=arr.size();
//   for(int i:arr){
//     cout<<i<<" ";
//   }

 cout<<allocateBook( arr,n,2)<<endl;
return 0;
}