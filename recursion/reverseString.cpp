#include<iostream>
using namespace std;


void reverseString(string &str,int i, int j){
if(i>j){
    return;
}

swap(str[i],str[j]);
 i++;
 j--;

  reverseString(str,i,j);

}

void reverseString1(string &str,int i,int n){

if(i>n){
    return;
}

swap(str[i],str[n]);
 i++;

  reverseString(str,i,n-i);

}

int main(){

 string str;
 cin>>str;
 reverseString1(str,0,str.size()-1);

 cout<<str<<endl;
return 0;

}