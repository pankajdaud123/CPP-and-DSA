#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
    int n,weight,rodweight;
   cin>> n >> weight >> rodweight;
    vector<int>arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }

   sort(arr.begin(),arr.end());
   long long  totalWeight = rodweight;

   for(int i=0;i<n-1;i++){
    if(arr[i]==arr[i+1]){
      totalWeight+= (2*arr[i]);
      i++;
    }
   }

   if(totalWeight >= weight){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }

}

    return 0;

}