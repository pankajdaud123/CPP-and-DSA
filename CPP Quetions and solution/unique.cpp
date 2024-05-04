#include <iostream>
using namespace std;

bool uniqueNum(int a[],int n){
	int ctr;
  int arr[5];
		
for(int i=0;i<n;i++){ 
arr[5]=0;
ctr=0;

  for(int j=0;j<n;j++){

    if(i!=j){

     if(a[i]==a[j]){
      arr[i]=ctr;
		 ctr++;
		
	 }
	}

  }
  if(ctr!=arr[i]){
	cout<<"true"<<endl;
}
else{
  cout<<"false"<<endl;
}
  
  
}


}

int main(){
	int arr[9]={5,8,3,5,2,4,9,5,8,};
  uniqueNum(arr,9);
return 0;
}