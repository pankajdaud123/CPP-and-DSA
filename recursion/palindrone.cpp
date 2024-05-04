#include<iostream>
using namespace std;


bool isPalindrone(string str,int i,  int j){


if(i>j){
   return true;
   }


if( str[i]!=str[j] )
  return false;


   return isPalindrone(str,i+1,j-1);
}


int main(){

string str;
cin>>str;


if(isPalindrone(str,0,str.size()-1)){
    cout<<"palindrone";
}
else {
    cout<<"Not palindrone";
}

    return 0;
}