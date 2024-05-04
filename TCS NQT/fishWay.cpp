#include <bits/stdc++.h>
using namespace std;

int ways(int i ,int j, vector<vector<bool>>&mat){

if(i>=mat.size() || j>=mat[0].size() || mat[i][j]==1)  return 0;
if(i==mat.size()-1 && j==mat[0].size()-1) return 1;

int right = ways(i+1,j,mat);
int left = ways (i,j+1,mat);
 return right+left;
}
int main(){
int n,m,a,b;
cin>>n>>m>>a>>b;
n++;
m++;
vector<vector<bool>>mat(n,vector<bool>(m,false));
 for(int i=0;i<a;i++){
    for(int j=m-1;j>m-1-b;j--){
        mat[i][j]=1;
    }
 }
 cout<<ways( 0,0,mat);
return 0;
}