#include<iostream>
#include<vector>
using namespace std;
 int  selecctioSort(vector<int> &nums, int m) {
         int n=nums.size();
        for(int i=0;i<n;i++){
       int miniIndex=i;

       for(int j=i+1;j<n;j++){

             if(nums[j]<nums[miniIndex]){

                 miniIndex=j;
             }
         swap(nums[miniIndex],nums[i]);
       }  
        }
        
       for(int i:nums){
            cout<<i<<" "<<endl;
        }
       
       return 0;

       
}
int main(){

vector<int>v={5,8,1,9,3};
int n=v.size();

cout<<"sorted array "<<selecctioSort(v,n)<<" "<<endl;

return 0;
}