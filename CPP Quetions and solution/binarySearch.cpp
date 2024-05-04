#include <iostream>
using namespace std;
int binarySearch(int a[],int n,int key){
int start=0;
int end=n-1;
int mid=start+(end-start)/2;

while(start <= end){
if(key==a[mid]){

    return mid;
}
 if(key>a[mid]){
   start=mid+1;  
}
else{
    end=mid-1; 
}
mid=start+(end-start)/2;
}
return -1;
}

int main(){
int odd[7]={1,3,4,5,6,8,9};
int even[6]= {1,3,4,6,7,9};
int index=binarySearch(odd,7,8);
int evenidex=binarySearch(even,6,4);

cout<<"index of 8 is "<<index<<endl;

cout<<"index of 8 is "<<evenidex<<endl;

return 0;
}