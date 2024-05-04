#include<iostream>
using namespace std;

vector<int>matrix(vector<vector<int>>&mat){




}








int main(){
int n;
cin>>n;
vector<vector<int>>matrix(n,vector<int>(n));
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin<<matrix[i][j]<<" ";
    }
    cout<<endl;
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
}

// matrix=createSpiralMatrix(n);

return 0;

}