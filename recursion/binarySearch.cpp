#include <bits/stdc++.h>
using namespace std;

void print(int *a,int s,int e){
for(int i=s;i<e;i++){
    cout<<a[i]<<" ";
}
cout<<endl;
}
bool biSearch(int *a,int s,int e,int k){
    cout<<endl;
  print(a,s,e);
   int m=s+(e-s)/2;
   cout<<"Value of mid "<<a[m]<<endl;
    
     if(s>e)  return false;

    if(a[m]==k){
        return true;
    }

    if(k < a[m]){
       return  biSearch(a,s,m-1,k);
    }
    else {
        return biSearch(a,m+1,e,k);
    }
}

int main(){int n;
int arr[5]={2,6,10,14,19};

int key = 25 ;

bool ans=biSearch(arr,0,5,key);
if(ans){
    cout<<"present";
 }
   else 
   cout<<"not present";
return 0;
}
