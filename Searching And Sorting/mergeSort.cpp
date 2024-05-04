#include<iostream>
using namespace std;

int merge(int arr[],int l,int mid, int r){
  int an=mid-l+1;
  int bn= r-mid;
  int a1[an];
  int a2[bn];

  for(int i=0;i<an;i++){
      a1[i]=arr[l+i];
  }
  for(int j=0;j<bn;j++){
    a2[j]=arr[mid+1+j];
  }

int i=0;
  int j=0;
  int k=l;
  while(i<an&& j<bn){
    if(a1[i]<a2[j]){
        arr[k++]=a1[i++];

    }
    else{
        arr[k++]=a2[j++];
    } 
  }
   while(i<an)
    arr[k++]=a1[i++];
   

   while(j<bn)
    arr[k++]=a2[j++];
   
}

void mergeSort(int arr[],int l,int r){
  
  if(l>=r)
    return ;
  
  int mid=(l+r)/2;
  mergeSort(arr,l,mid);
  mergeSort(arr,mid+1,r);
  merge(arr,l,mid,r);

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