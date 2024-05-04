#include <iostream>

using namespace std;

int findDublicate(int a[],int n){
veco
for(int i=0;i<n;i++){
ans^=a[i];
}
// for(int i=1;i<n;i++){
// ans=ans^i;
// }
return ans; 

}
int main(){
int a[]={5,6,1,5,1};
int n=sizeof a /sizeof(int);
cout<<findDublicate(a,n);




return 0;
} 