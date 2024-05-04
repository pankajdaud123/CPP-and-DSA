#include <bits/stdc++.h>
using namespace std;
int dublicatePrint(int a[],int n){
    sort(a,a+n);
for(int i=0;i<n-1;i++){
 for(int j=i+1;j<n-1;j++){

           if(a[j]==a[i]){
           cout<<a[i]<<" ";
           }
       else 

       return -1;
    }  
   
}

}
int main(){
int arr[]={1,5,8,9};
int n= sizeof arr/sizeof(0);
dublicatePrint(arr,n);
return 0;
}