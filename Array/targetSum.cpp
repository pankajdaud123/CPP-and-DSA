#include <bits/stdc++.h>
using namespace std;
int targetSum(int a[], int n , int target){
int pair=0;
 for(int i=0;i<n;i++){

  for(int j=i+1;j<n;j++){
   if(a[i]+a[j]==target)
       pair++;
  }
 }
  return pair;
}

int main(){
int a[5]={3,4,6,7,1};
int target=7;
cout<<targetSum(a,5,target);

return 0;
}