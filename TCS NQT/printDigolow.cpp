#include <bits/stdc++.h>
using namespace std;
void result(int &ans[][]){
    int row=ans.size();
    int col=ans[0].size();
    for(int i=0;i<row;i++){
     for(int j=0;j<col;j++){
        if(i<j){
            cout<<"0"<<" ";
        }
        else {
           cout<<ans[i][j]<<"  ";
        } }
}
}
int main(){
int n;
int ans[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){   
        cin>>ans[i][j];
    }
}
result(ans);

return 0;
}