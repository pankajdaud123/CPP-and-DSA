#include <bits/stdc++.h>
using namespace std;
int main(){
    
int n;
cin>>n;
int a[n];
int mx=0;
map<int,int>freq;
for(int i=0;i<n;i++){
 cin>>a[i];
 freq[a[i]]++;
 mx=max(mx,a[i]);
}
for( auto it:freq){
    if( (it.first == mx && it.second>1) || it.second >2 ){
cout<<"false"<<endl;
        return 0;
    }
}
cout<<"True"<<endl;
return 0;
}