//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
   int minValue(string s, int k){
        map<char,int>freq;
        int ans=0;
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
        }
        cout<<"before"<<endl;
         for(auto i:freq){
            cout<<i.first<<" "<<i.second<<endl;
        }

        char index;
        int mx=0;

       for(auto it:freq){
          if(mx<it.second){
            mx=it.second;
            index=it.first;
          }
       }
    //    cout<<mx<<endl;
    //    cout<<index<<endl;

        for(auto it:freq){
        while(k!=0){
        if(it.second > mx){
            freq[s[it.first]]--;
            k--;
        }
        else{
            freq[index]--;
            mx=mx-1;        
            k--;
          }
        }
    }       

     cout<<"after"<<endl;
         for(auto i:freq){
            cout<<i.first<<" "<<i.second<<endl;
        }
      
        for(auto j:freq){
            ans+=pow(j.second,2);
        }
        return ans;
    }
  

  int using_queue_minValue(string s, int k){
        unordered_map<char,int>freq;
        int n=s.size();
        priority_queue<int> q;
        int ans=0;
        for(int i=0;i<n;i++){
            freq[s[i]]++;
        }
      
        for(auto it:freq){
           q.push(it.second);
        }
        
        while(k){
            int t =q.top();
            t=t-1;
            q.pop();
            q.push(t);
            k--;
        }
        
        while(!q.empty()){
            int x =q.top();
            x=x*x;
            ans=ans+x;
            q.pop();
        }
        return ans;
    }

//{ Driver Code Starts.

int main(){
     string s = "aabcbcbcabcc";
     int k=3;
     cout<<minValue(s,k);
    
    return 0;
}
// } Driver Code Ends