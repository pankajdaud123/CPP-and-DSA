#include <bits/stdc++.h>
using namespace std;

bool  isPossiblesol(vector<int> stalls,int k,int mid){
int cowcount=1;
int lastpos=stalls[0];

for(int i=0;i<stalls.size();i++){
  if(stalls[i]-lastpos >= mid){

    cowcount++;
    if(cowcount==k){
        return true ;
    }
    lastpos=stalls[i];
  }
}
return false;
}

int aggresivecows(vector<int> stalls,int k){
int s=0;
int ans=-1;
int maxi=-1;
sort(stalls.begin(),stalls.end()); 

for(int i=0;i<stalls.size();i++){

    maxi=max(maxi,stalls[i]);
}
int e=maxi;

while(s<e){
    int mid=s+(e-s)/2;
if(isPossiblesol(stalls,k,mid)){
    ans=mid;
    s=mid+1;
}
else{
    e=mid-1;
}
}
return ans;
}
int main(){
vector<int> v ={4,2,1,3,6};
int k=2;
cout<<aggresivecows(v,k)<<endl;


return 0;
}