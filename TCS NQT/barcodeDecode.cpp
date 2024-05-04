#include <bits/stdc++.h>
using namespace std; 
int find_maximum(int num){
 int maxi=0;
 while(num != 0){
  int mx=num%10;
 maxi=max(maxi,mx);
 num/=10;
}
return maxi;
}
int main(){
 string s;
cin>>s;
int price=0;
for(int i=0;i<s.size();i++){
  if(s[i]>='0' && s[i]<='9'){
  price+=(s[i]-48);
  }
  else{
 int maxi= find_maximum(int(s[i])) ;
  price+=maxi;
  }
}
cout<<price<<endl;
return 0;
}