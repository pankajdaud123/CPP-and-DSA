#include <bits/stdc++.h>
using namespace std;
int sweetSeventeen(string str){
  int n=str.length()-1;
   int i=0;
   int decimal=0;
   int num=0;
   while(i<=n){
    if(str[i]>='0' && str[i]<='9'){
      num=int(str[i])-'0';
    } 
    else if(str[i]>='A' && str[i]<='G'){
      num=int(str[i])-'A'+10;
    }
    else if(str[i]>='a' && str[i]<='g'){
      num=int(str[i])-'a'+10;
    }
   decimal=decimal+num*pow(17,n-i);
  i++;
   }
  return decimal;
 }
int main(){
string str;
cin>>str;
cout<<sweetSeventeen(str)<<endl;
return 0;
}