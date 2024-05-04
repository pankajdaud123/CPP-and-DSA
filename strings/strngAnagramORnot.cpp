#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s1,string s2){
 int n=s1.size();
 int m=s2.size();
 if(n!=m)  return false;
 vector<int>freq(26,0);
    
     //storing frequency of every cahracher in string 
    for(int i=0;i<n;i++){
        freq[s1[i]-'a']++;//for s1, we increment the char in freq
        freq[s2[i]-'a']--;//for s2, we increment the char in freq
    }

    
     for(int i=0;i<26;i++){
     if(freq[i]==0) return true;
    }

    return false;
}




int main(){
    string s1,s2;
cout<<"First string"<<endl;
cin>>s1;
cout<<"second string"<<endl;
cin>>s2;

if(isAnagram(s1,s2)){
    cout<<"string are anagram";
}
else {
cout<<"Strinng are not anagram";
}
return 0;
}