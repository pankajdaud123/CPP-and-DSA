#include<iostream>
#include<vector>
using namespace std;

void ladderPrint(int r, int c, vector<vector<int>>&matrix)
{


for(int i=0;i<r;i++){
    for(int j=i;j<c;j++){
        cout<<matrix[i][j];
    }
    cout<<endl;
}

}



int main(){

 int n;
 int m;
 cin>>n;
 cin>>m;

 vector<vector<int>>matrix(n,vector<int>(m,0));
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>matrix[i][j];
    }
 }

 ladderPrint(n,m,matrix);
  
    return 0;
}