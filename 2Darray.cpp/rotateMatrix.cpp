#include<bits/stdc++.h>
#include<vector>
using namespace std;

void rotateMatrix(vector<vector<int>>&v){
int n=v.size();
// transpose of matrix

for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
        swap(v[i][j],v[j][i]);
    }
}
// reverse the matrix
for(int i=0;i<n;i++){
  reverse(v[i].begin(),v[i].end());
}
}

int main(){
int n;
cin>>n;
vector<vector<int>>vec(n,vector<int>(n));

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>vec[i][j];
    }
}
cout<<"Before rotate"<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<vec[i][j]<<" ";
    }
    cout<<endl;
}

rotateMatrix(vec);
 cout<<"Before rotate"<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
       cout<<vec[i][j]<<" ";
    }
    cout<<endl;
}

return 0;
}