#include <iostream>
using namespace std;

uniqueNumber(int arr[],int n){
    int ans=0;
for(int i=0;i<n;i++){
ans=ans^arr[i];
}
return ans ;
}
int main(){
int a[5]={1,2,1,2,5};
cout<<   uniqueNumber(a,5);
return 0;
} 