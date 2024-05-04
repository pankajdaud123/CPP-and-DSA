#include <bits/stdc++.h>
using namespace std;
int main(){
 int n,m;
 cin>>n>>m;
 int a1[n];
 int a2[m];
  map<int,int>freq;
for(int i=0;i<n;i++){
    cin>>a1[i];
    freq[a1[i]]++;
 }
 int j=0;
 for(int i=0;i<m;i++){
    cin>>a2[i];
    while(freq[a2[i]]>0){
       a1[j]=a2[i];
       freq[a2[i]]--;
        j++;
    }
 }
 for(auto &it:freq){  
     while(it.second>0){
       a1[j]=it.first;
       it.second--;
       j++;
     }
 }
 for(auto it:a1){
   cout<<it<<" ";
 }
return 0;
}