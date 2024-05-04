#include <bits/stdc++.h>
using namespace std;

bool lisearch(int *a,int n,int k){

if(n==0){
    return false;
}

if(a[0]==k){
    return true;
}

int remainpart=lisearch(a+1,n-1,k);

return remainpart;

}
int main(){int n;
int arr[5]={1,2,3,4,5};
int size=5;
int key;
cin>>key;
bool ans=lisearch(arr,size,key);
if(ans){
    cout<<"present";
 }
   else 
   cout<<"not present";
return 0;
}
