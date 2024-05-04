#include <bits/stdc++.h>
using namespace std;

int targetSum(int *a,int n,int target){
int pair=0;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        for(int k=j+1;k<n;k++){
     if(a[i]+a[j]+a[k]==target)
          pair++;
  
        }
    }}
return pair;
}




int main(){
int a[6]={3,1,2,4,0,6};
int target=5;
cout<<targetSum(a,6,target);

return 0;
}
