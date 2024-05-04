#include <bits/stdc++.h>
using namespace std;

 string decodeString(string s) {
      string  result="";
      for(int i=0;i<s.length();i++){

          if(s[i]!=']'){
              result.push_back(s[i]);
          }
          else {
              string str="";

              while(!result.empty() &&  result.back()!='['){
              str.push_back(result.back());
               result.pop_back();
                }
              reverse(str.begin(),str.end());
              result.pop_back();

                string  num;
               
                while(!result.empty() && (result.back()>='0' && result.back()<='9')){
                    num.push_back(result.back());
                     result.pop_back();
                }
                reverse(num.begin(),num.end());
                // stringstream conversion;
                // conversion<<num;
                // int ans_length=0;
                // conversion>>ans_length;
                long ans_length= stoi(num);

                while(ans_length){

                    result+=str;
                    ans_length--;
                }
    
    
    
            } 
        }
        return  result;
    }


int main(){
string str;
cin>>str;

cout<<"the decode string is   "<<decodeString(str)<<endl;
return 0;
}