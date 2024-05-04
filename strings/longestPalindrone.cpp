#include<iostream>
using namespace std;

bool ispalindrone(string s) {
        int i=0;
        int j=s.size()-1;
        while (i <= j) {
            if (s[i] != s[j])
                return false;
            i++;
            j--;
        }

        return true;
    }
    string longestPalindrome(string str) {

        string ans=str.substr(0,1);
        int n=str.size();
        for(int i=0;i<n;i++){
           for(int j=i+1;j<n;j++){
            string check= str.substr(i,j-i+1);
             if(ispalindrone(check) && ans.size()<check.size()){
              ans=check;
             }
           
           }
        }
        return ans;
    }
int main(){

    string str;
    cin>>str;
  cout<< longestPalindrone(str);
  return 0;



}