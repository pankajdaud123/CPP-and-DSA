#include<iostream>
using namespace std;

int merge(int *arr, int s,int e){
  int mid= (s+e)/2;
 int n= mid-s+1;
 int m= e-mid;
 int a[n];
 int b[m];
//   copy the array 
int k=s;
 for(int i=0;i<n;i++){
   a[i]=a[k++];
 }
 //   copy the array 
  k=mid+1;
 for(int j=0;j<m;j++){
   a[j]=a[k++];
 }

  
//  merge  the two array
 int index1=0;
 int index2=0;
   k=s;

 while(index1<n && index2<m){
   if(a[index1]<b[index2]){
    arr[k++]=a[index1++];
   }
   else{
    arr[k++]=arr[index1++];
   }
 }

 while(index2<m){
    arr[k++]=arr[index2++];
 }

}
void mergeSort(int *a, int s, int e){

if(s >=e){
     return;
}
int mid= (s+e)/2;
// call recursion for left part
mergeSort(a, s,mid);
// call fror the right part
mergeSort(a,mid+1,e);
merge( a , s , e);

}

int main(){
int arr[]={1,5,5,1,2,4,6,9,8};
int n=sizeof(arr)/sizeof(arr[0]);
mergeSort(arr,0,n-1);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;


return 0;
}