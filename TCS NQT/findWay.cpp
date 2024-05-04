#include <bits/stdc++.h>
using namespace std;
int path(int i, int j, int n){
  
  if( i<0 || j<0 || i>=n || j>= n )  return 0;
  if( i==n-1 && j==n-1)  return 1;

  int way=0;
  
way+=path(i+1,j,n);
way+=path(i,j+1,n);  
return way;

}
int main(){
int n;
cin>>n;

cout<<path(0,0,n);
return 0;
}