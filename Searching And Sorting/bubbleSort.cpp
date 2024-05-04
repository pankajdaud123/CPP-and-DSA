#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> &arr , int n){
 for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

void bubbleSort(vector<int> &arr , int n){
  bool swaped;
    for(int i=1;i<n;i++){
// for round 1 st to n-1 ;
        swaped=false;
        for(int j=0;j<n-i;j++){

            if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            swaped = true;
            }
         print(arr,n);
        }

        if(swaped==false){
            break;
        }
    }   
}


void bubble_Sort(vector<int>&a,int n){
bool swapped;
 for(int i=1;i<n;i++){
    swapped=false;
    for(int j=0;j<n-i;j++){
     if(a[j]>a[j+1]){
        swap(a[j],a[j+1]);
        swapped=true;

     }
     
     }
       if(swapped==false){
        break;
    }

 }





}
int main(){
   
   vector<int>arr ={5,8,6,1,3};
    bubble_Sort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;

}