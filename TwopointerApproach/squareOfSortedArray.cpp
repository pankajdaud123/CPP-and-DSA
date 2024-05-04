// #include <bits/stdc++.h>
// using namespace std;

vector <int> sortedSquares(vector<int>& nums) {

        int i=0;
        int j=nums.size()-1;
       vector<int>ans(nums.size());
       int pos=nums.size()-1;
        while(i<=j){ 
      if(abs(nums[i]) < abs(nums[j])){
          ans[pos--]=nums[j]*nums[j];
          j--;
      }else 
      {
          ans[pos--]=nums[i]*nums[i];
          i++;
       }
      }
      return ans;
    }
int main(){
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    int ele;
   cin>>ele;
   v.push_back(ele);

}
sortedSquares(v);
// for(int i=0;i<n;i++){
// cout<<v[i]<<endl;
// }cout<<endl;
return 0;
}


