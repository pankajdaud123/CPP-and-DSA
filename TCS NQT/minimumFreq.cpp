#include <bits/stdc++.h>
using namespace std;
int main(){
string  s;
cin>>s;
string ans;
int mn=INT_MAX;
int count=s.size();

map<char,int>freq;
for(int i=0;i<s.size();i++){
freq[s[i]]++;
mn=min(mn,freq[s[i]]);
}
 for(auto it:freq){
    if(it.second==mn){
        cout<<it.first<<endl;
    }
 }
return 0;
} 