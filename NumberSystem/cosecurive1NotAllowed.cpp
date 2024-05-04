#include <bits/stdc++.h>
using namespace std;
#define ll long long
	 
	ll countStrings(int n) {
	     int mod=1e9+7;
	    // code here
	     ll f=1;
	     ll s=2;
	     
	     for(int i=2;i<=n;i++){
	         ll t= (f+s)%mod;
	         f=s;
	         s=t;
	     }
	     return s;
	}

int main(){
 int n;
 cin>>n;

 cout<<countStrings(n);
return 0;
}