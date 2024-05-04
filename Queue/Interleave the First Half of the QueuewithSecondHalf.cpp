//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<int> rearrangeQueue(queue<int> &q){
           vector<int>ans;
    stack<int>s;
    int n=q.size()/2;
    int cnt=0;
    int freq= 0;
  
    while(cnt!=n){
     int data=q.front();
     q.pop();
     s.push(data);
     cnt++;
    }
    cnt=0;
    
    while(!s.empty()){
       q.push(s.top()); 
    }
    
    while(cnt!=n){
    int val=q.front();
    q.pop();
    q.push(val);
    }
    
    while(cnt!=n){
     int data=q.front();
     q.pop();
     s.push(data);
     cnt++;
    }
    cnt=0;
    
  while(cnt!=n){
      q.push(s.top());
      s.pop();
      int val=q.front();
      q.pop();
      q.push(val);
  }
  
  for(int i=0;i<q.size();i++){
      int val= q.front();
      q.pop();
      ans.push_back(val);
      
  }
    
    return ans;
    
    }
   
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        queue<int> q;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            q.push(a);
        }
        Solution ob;
        vector<int> ans=ob.rearrangeQueue(q);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
// } Driver Code Ends