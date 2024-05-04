#include <bits/stdc++.h>
using namespace std;

// int sortZeroOnes(vector<int> &v){
//   int count=0;
//   for(int i=0;i<v.size();i++){
//     if(v[i]==0){
//   count++;
//     }
//   }
//   for(int i=0;i<v.size();i++){
//     if(i<count){
//         v[i]=0;
//     }
//     else {
//         v[i]=1;
//     }
//   }
  
// }


int sortZeroOnes(vector<int> &v) {
        // code here
  int start=0;
  int end=v.size()-1;
  
  while(start<end){
      
      if(v[start]==1 && v[end]==0){
          swap(v[start],v[end]);
          start++;
          end--;
      }
      
      if(v[start]==0)
          start++;
      
      if(v[end]==1)
          end--;
      
  }
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

sortZeroOnes(v);

for(int i=0;i<n;i++){
cout<<v[i]<<endl;
}cout<<endl;
return 0;
}