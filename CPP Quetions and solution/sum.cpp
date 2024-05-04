#include <iostream>
using namespace std;
void madgame(string name, string color,string celebrity){
    string name,color,celebrity;
	cout<<"Enter your name"<<endl;
	getline(cin,name);
	cout<<"Enter your favorite color"<<endl;
	getline(cin,color);
	cout<<"Enter favorite celebrity"<<endl;
	getline(cin,celebrity);
	cout<<"hii  my name is "<<name<<endl;
	cout<<"roses are"<< color <<"violet are blue"<<endl;
	cout<<" i love "<< celebrity;
}


int main(){
	
	madgame("pankaj","red","eva");
	
	
  return 0;
}