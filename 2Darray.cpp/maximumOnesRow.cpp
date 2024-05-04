#include<iostream>
#include<vector>
using namespace std;

int leftMostones(vector<vector<int>> &vec){
  int maximumRow=-1;
  int j=vec[0].size()-1;
 while(j>=0 && vec[0][j]==1){
       maximumRow=0;
       j--;
 }
for(int i=1;i<vec.size();i++){
while(j>=0 && vec[i][j]==1){
       maximumRow=i;
       j--;
 }
}
return maximumRow;
}

int maximumOnes(vector<vector<int>> &vec){
   int maximum=0;
   int maximumRow=-1;
   int colSize=vec[0].size();
     for(int i=0;i<vec.size();i++){
         for(int j=0;j<vec[0].size();j++){
            if(vec[i][j]==1){
              int numOnes=colSize-j;
               if(numOnes>maximum){
                maximum=numOnes;
                maximumRow=i;
               }
                break;
            }    
         }
           }
  return maximumRow;
}
int main(){
int n,m;
cin>>n>>m;
vector<vector<int>>vec(n,vector<int>(m));
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
       cin>>vec[i][j];
    }
}
int result=leftMostones(vec);
cout<<result;
return 0;
}