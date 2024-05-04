#include<iostream>
using namespace std;
void printArray(int a[],int n){
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
}
int insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){f
      int temp=arr[i];
      int j=i-1;
     for(;j>=0;j--){

        if(arr[j]>temp){
//    shift

        arr[j+1]=arr[j];

}
else{
 break;
} 
 }
 cout<<"Round"<<i<<endl;
printArray(arr,n);
cout<<endl;
 arr[j+1]=temp;
 cout<<"Round after"<<i<<endl;
printArray(arr,n);
cout<<endl;
}
return 0;
}


void insertionSort1(int arr[],int n){
  for(int i=1;i<n;i++){
    int key=arr[i];
   int j=i-1;
   while(j>=0 && key<arr[j]){
    arr[j+1]=arr[j];
    j--;
    }
    
  arr[j+1]=key;
}
}


int main(){
int a[]={9,5,1,3,10};

int n=sizeof (a)/ sizeof(int);

insertionSort1(a,n);
printArray(a,n);
return 0;

}