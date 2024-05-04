#include <bits/stdc++.h>
using namespace std;
bool isSorted(int a[],int n){

    if(n==0 || n==1){
        return true;
    }
    if(a[0]>a[1]){
        return false;
    }
 else{
    bool remainpart= isSorted(a+1,n-1);
    return remainpart;
}
}
int main(){
    int n;
cin>>n;
int arr[n]={0};
for(int i=0;i<n;i++){
    cin>>arr[i];

}
int ans=isSorted(arr,n);
 
 if(ans){
    cout<<"sorted";
 }
   else 
   cout<<"not sorted";
return 0;
}
