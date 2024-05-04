 #include<iostream>
using namespace std;
 
 void sortArray(int *arr,int n){

    if(n==0 || n==1){
        return ;
    }

    // 1 case solver  . largest element plalce at n-1

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }

    }
    sortArray(arr,n-1);
 }



int main(){

 int arr[]={5,3,6,5,9,1};
sortArray(arr,6);
 
 for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
 }cout<<endl;

    return 0;
 }  