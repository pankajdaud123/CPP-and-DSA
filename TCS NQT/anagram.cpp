#include <bits/stdc++.h>
using namespace std;
bool anagram(string s1,string s2){
if(s1.size()!=s2.size())  return false;

unordered_map<char,int>freq;
for(int i=0;i<s1.size();i++){
     freq[s1[i]]++; 
}
for(int i=0;i<s2.size();i++){
    if(freq.find(s2[i])!= freq.end()){
        freq[s2[i]]--;
    }
    else {
        return false;
    }
}
 for(auto it:freq)
if(it.second!=0){
    return false;
}

return true;
}
int main(){
string s1,s2;
cin>>s1>>s2;
cout<<anagram(s1,s2)<<endl;
return 0;
} 