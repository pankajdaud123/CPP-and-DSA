#include <iostream>
using namespace std;
int firstOccurance(int a[],int n,int key){
int start=0;
int end=n-1;
int mid=start+(end-start)/2;
int ans;
while(start <= end){
if(key==a[mid]){
 ans=mid;
 end=mid-1;

}
 if(key>a[mid]){
   start=mid+1;  
}
else{
    end=mid-1; 
}
mid=start+(end-start)/2;
}
return ans;
}

int last(int a[],int n,int key){
int start=0,end=n-1;
int mid=start+(end-start)/2;
int ans=-1;
while(start <= end){
if(key==a[mid]){
 ans=mid;
 start=mid+1;

}
 if(key>a[mid]){
   start=mid+1;  
}
else if(key<a[mid]) {
    end=mid-1; 
}
mid=start+(end-start)/2;
}
return ans;
}



int main(){
int a[11]= {1,2,2,2,3,3,3,3,5,5,5};
cout<<" first index of 3 is "<<firstOccurance(a,11,3)<<endl;
cout<<" last index of 3 is "<<last(a,11,3)<<endl;



return 0;
}