#include <iostream>
using namespace std;

 void reverseString(string&s ,int i, int j ){
 	
 	if(i>=j){
 		
 		return;
	 }
	 
	 swap(s[i],s[j]);
	 reverseString(s,++i,--j);
 }


int main(){
	
	string s;
	cin>>s;
	int i=0; 
	int j=s.size()-1;
	reverseString(s,i,j);
	cout<<s;
	return 0;
}
