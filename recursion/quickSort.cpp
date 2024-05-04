#include<iostream>
using namespace std;

int partion(int *a, int s, int e){
 int pivot=a[s];
 int cnt=0;
  for(int i=s+1;i<=e;i++){
    if(a[i]<pivot)
    cnt++;
  }
  int pivotIndex=s+cnt;
 swap(a[s],a[pivotIndex]);

 int i=s;
 int j=e;
 while(i < pivotIndex && j > pivotIndex){
  while(a[i]<=pivot){
    i++;
  }     
  while(a[j]>pivot){
    j--;
  }

  if(i< pivotIndex && j> pivotIndex){
  swap(a[i],a[j]);
  }
 }

return pivotIndex;
}

void quickSort(int *arr, int s, int e){

  if(s>=e){
    return ;
  }

  int p=partion(arr,s,e);
  quickSort(arr,s,p-1);
  quickSort(arr,p+1,e);

}

int main(){


    int arr[]={5,3,6,7,9,1};
    int n=6;
    quickSort(arr, 0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}
