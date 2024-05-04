#include <bits/stdc++.h>
using namespace std;

vector<int>findRooms(int n, int k,vector<int>&coins){ 
  int start=0;
  int end=0;
  int current_sum=0;
  
  vector<int>result{0};

  while(end<n){
    current_sum+=coins[end];

    while(current_sum>k){
        current_sum-=coins[start];
        start++;
  }

  if(current_sum==k && (end-start < result[1]-result[0])){
     result[0]=start;
     result[1]=end;
    }
    end++;
  }
  if(result[1]==0){
    cout<<"NO solutionn is found"<<endl;
  }
 return result;
 }


int main(){
cout<<"Enter the number  of the rooms "<<endl;
int n,k;
cin>>n;
cout<<"Enter the gold coins to collect(single amount)"<<endl;
cin>>k;
vector<int>coins(n);
cout<<"Enter the coins present in each room"<<endl;
for(int i=0;i<n;i++){
cin>>coins[i];
}

vector<int>result=findRooms(n,k,coins);

cout<<"The room start from "<<result[0]+1<<" exit from "<<result[1]+1<<endl;

return 0;
}
