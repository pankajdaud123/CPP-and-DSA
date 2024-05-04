#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==0 || n==1) return 1;

    return n*fact(n-1);
}
int main(){
string s1;
cin>>s1;

map<char,int>freq;
int n=s1.size();
for(int i=0;i<n;i++){
   freq[s1[i]]++;
}

int ans= fact(n);
for(auto it:freq){
    ans=ans/fact(it.second);

}
cout<<ans<<endl;
return 0;
}