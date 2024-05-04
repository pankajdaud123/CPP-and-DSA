#include <bits/stdc++.h>
using namespace std;
bool isSorted(int a[],int n,int key){

// base case
if(n==0) return false;


 if(a[0]==key)
      return true;

isSorted(a+1,n-1,key);

}
int main(){
int arr[5]={1,2,3,4,5};
int size=5;
int key;
cin>>key;
bool ans=isSorted(arr,size,key);

cout<<ans<<endl;
return 0;
}