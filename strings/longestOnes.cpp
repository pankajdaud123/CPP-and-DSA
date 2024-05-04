#include <bits/stdc++.h>
using namespace std;

int  longesrOnes(string s,int k){
    int zerocount=0;
    int max_size=0;
    int start=0;
    int end=0;
    
    for(; end<s.size();end++){

    if(s[end]=='0'){
        zerocount++;
    }

    while(zerocount>k){
        start++; 
        zerocount--;   
    }
   max_size=max(max_size,end-start+1);

    }
  

  return max_size;
}

int main(){
string str;
cout<<"Enter  the binary string  ";
cin>>str;
int k;
cout<<"Enter  the number we split string   ";
cin>>k;
cout<<"lonest ones sunstring is "<<longesrOnes(str,k)<<endl;
return 0;
}