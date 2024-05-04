#include <bits/stdc++.h>
using namespace std;

int maximumFreq( string s){
  int mx=0;
  map<char,int>freq;
  char ans;
for(int i=0;i<s.size();i++){
   freq[s[i]]++;
   mx=max(mx,freq[s[i]]); 
}
for(auto it:freq){
  if(it.second==mx){
  cout<<it.first<<endl;
  }
}

return 0;
}
int main(){
string s;
cin>>s;
int mx=0;
int count=0;
char ans;
map<char,int> freq;

for(int i=0;i<s.size();i++){
  freq[s[i]]++;

  if(count<freq[s[i]]){
     ans=s[i];
     count=freq[s[i]];
  }
} 
cout<<ans<<endl;
return 0;
} 