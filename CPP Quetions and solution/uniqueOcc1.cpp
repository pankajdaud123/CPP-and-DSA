#include <iostream>
#include <vector>
using namespace std;
bool UniqueFrequency(int a[],int n){
vector<int> v(n+1);
for(int i=0;i<n;i++){
 for(int j=0;j<n;j++){
  if(i!=j){
if(a[j]==i){
v[i-1]++;
 }
 }
 } 
 }
 for(int i:v){
  cout<<i<<" "<<endl;
 }
for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j || v[i] == 0)
				continue;
			if (v[i] == v[j]) {

				// If any duplicate frequency then return
				// false
				return false;
      }
			}
}
 return true;
}

int main(){

    int a[]={2,2,1,2,3,3,3};
    int n= sizeof(a)/sizeof(int);
 int result=UniqueFrequency(a,n);
if (result)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}

