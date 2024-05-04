#include <bits/stdc++.h>
using namespace std;

int sumArray(int a[],int n){

//  base case
if(n==0){
    return 0;
}
cout<<a[n-1]<<endl ;
return  (a[n-1]+sumArray(a,n-1));



}
int main(){
 int n;
cin>>n;
int arr[n]={0};
for(int i=0;i<n;i++){
    cin>>arr[i];

}
cout<<sumArray(arr,n);


return 0;
}