#include<bits/stdc++.h>
using namespace std;


int minOnes(int n , int m, vector<vector<int>>a){

  int index=1;
        for(int i=1;i<=n;i++){
            int cnt=0;
            int mn=n+1;
            for(int j=1;j<m;j++){ 
                if(a[i][j]==1){
                   cnt++; 
                }
            }
            if(cnt<mn){
                mn=cnt;
                index=i;
            }
        }
        return index;
    }

 
int main(){
 int n,m;
 cin>>n>>m;
 
 vector<vector<int>>a(n,vector<int>(m));

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a[i][j];
    }
}
cout<<minOnes(n,m,a);

    return 0;
}