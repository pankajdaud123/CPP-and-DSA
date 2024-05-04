#include <bits/stdc++.h>
using namespace std;

//  int isPerfectNumber(long long N) {
//         // code here
//         long long i=0;
//         long long sum=0;


//         while(i<=N){
            
//             if(i%N==0){
//              sum=sum +i;   
//             }
//         }
//         if(sum==N){
//             return 1;
//         }
//         else
//         return 0;
//     }
int main(){
    int n;
cout<<"Enter the number"<<endl;
cin>>n;

 long long i=0;
        long long sum=1;


        for(int i=0;i<sqrt(n);i++){
            
            if(i%n==0){
             sum=sum +i;   
            }
        }
        if(sum==n){
          cout<<"perfect";
        }
        else
        cout<<"perfect";

    return 0;
    }
