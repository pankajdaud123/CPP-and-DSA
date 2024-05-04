#include <iostream>
using namespace std;
uniqueNum(int a[],int n){
	int ctr;
		
for(int i=0;i<n;i++){ 
ctr=0;

  for(int j=0;j<n;j++){

    if(i!=j){

     if(a[i]==a[j]){
		 ctr++;
		
	 }
	}

  }
  if(ctr==0){
	cout<<a[i]<<" "<<endl;
}
}
}

int main(){
	int arr[9]={5,8,3,5,2,4,9,5,8,};
  uniqueNum(arr,9);
return 0;
}