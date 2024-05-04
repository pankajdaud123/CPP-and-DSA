#include <bits/stdc++.h>
using namespace std;

string upperLower(string str){
  vector<int>freq(26,0);
  string ans;
  for(int i=0;i<str.length();i++){

    if( i%2==0){
     char ch= tolower(str[i]);
       ans.push_back(ch);
    }
    else{
       char ch= toupper(str[i]);
       ans.push_back(ch);

    }


  }
return ans;

}



int main(){
string str;
cin>>str;

 cout<<upperLower(str);
return 0;
}