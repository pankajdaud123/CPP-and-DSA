#include <bits/stdc++.h>
using namespace std;

bool  checkPrefixSunffix(vector<int>&v){
  int total_sum=0;
  
    for(int i=0;i<v.size();i++){
      total_sum+=v[i];
    }
    int prefixSum=0;
    for(int i=0;i<v.size();i++){
     prefixSum+=v[i];
   
    int sufixSum=total_sum-prefixSum;

    if(prefixSum==sufixSum){
          return true; 
    }
  }
  return false;
}



int main(){
    int n;
cin>>n;
vector<int>v;
for(int i=0;i<n;i++){
    int ele;
   cin>>ele;
   v.push_back(ele);

}

cout<<checkPrefixSunffix(v)<<endl;

// for(int i=0;i<n;i++){
// cout<<v[i]<<" ";
// }cout<<endl;
return 0;
}
