#include<bits/stdc++.h>
using namespace std;

  int countDown(int n){
  	
  	  if(n==0){
  	  	return n;
		}
		cout<<n<<" ";
  	  return countDown(n-1);
  }

int main(){
	int n;
	cin>>n;
	countDown(n);
	return 0;
}
