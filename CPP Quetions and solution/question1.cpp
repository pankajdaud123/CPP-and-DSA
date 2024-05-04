#include <iostream>
using namespace std;
int printArray(int a[],int n){

    for(int i=0; i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;  
}
int swapAlter(int a[],int size){
    int temp,i,j;

    for(int i=0; i<size;  i+=2  ){
        if(i+1<size){
        //swap(a[i],a[i+1]);
       temp=a[i];
       a[i]=a[i+1];
       a[i+1]=temp;
  }
 
  }
}
int main(){
int arr[6]={5,6,2,5,6,1}; 
int arr1[5]={5,8,6,4,1};

swapAlter(arr,6);
printArray(arr,6);
swapAlter(arr1,5);
printArray(arr1,5);

return 0;
}