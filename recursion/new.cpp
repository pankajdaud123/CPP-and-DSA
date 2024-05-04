#include<iostream>
using namespace std;

int mergeArray(int a[],int b[],int n,int m,int ans[]){
  int i=0;
  int j=0;
  int k=0;
  while(i<n && j<m){
    if(a[i]<b[j]){
        ans[k++]=a[i++];

    }
    else{
        ans[k++]=b[j++];
    } 
  }
   while(i<n)
    ans[k++]=a[i++];
   

   while(j<m)
    ans[k++]=b[j++];
   
}

int main(){

int A[5]={2,3,5,7,9};
int B[6]={1,3,4,8,9,10};
int ans[11];
mergeArray(A,B,5,6,ans);


cout<<"Array after sorting "<<endl;
 for(int i=0;i<9;i++){
      cout<<ans[i]<<" ";
    }
    cout<<endl;
    int a=(1/3);
    cout<<a<<endl;
return 0;

}