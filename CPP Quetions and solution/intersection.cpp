#include <iostream>
using namespace std;
int intersection(int a[],int arr[],int n, int m){

for (int i=0;i<n;i++){
for(int j=0;j<m;j++){
if(a[i]==arr[j]){
cout<<a[i]<<" ";
   }
}
}

}

int main(){
int a[]={2,6,9,7,1,3};
int arr[]={1,5,8,3,9};
int n=sizeof a/ sizeof(int);
int m=sizeof arr/ sizeof(int);

intersection(a,arr,n,m);


return 0;
}