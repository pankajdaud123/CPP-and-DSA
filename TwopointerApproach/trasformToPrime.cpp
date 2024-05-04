#include <bits/stdc++.h>
using namespace std;

 bool isPrime(int n){

 }
        
        

int main(){

    int n;
    cin>>n;
    int arr[n]={0};
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }


        int sum;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        if(sum==isPrime(sum)){
            cout<<"prime";
        }
        else  {

cout<<"not"; 
        }      
           return 0;
}