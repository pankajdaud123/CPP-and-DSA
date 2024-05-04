//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


    int divisibleByEight(string s){
        //code here
        int n=s.size();
         string new_s="";
         int i=0;
         cout<<"here"<<endl;
         cout<<s[i]-'0'<<endl;
         if(n==1 || n==2){
            int x=stoi(s);
            if(x%8==0){
                return 1;
            }
         }
        for(int i=s.size()-3;i<s.size();i++){
            cout<<s[i]<<endl;
        new_s= new_s + s[i];
        }
        
        
        int ans = stoi(new_s);
        if(ans%8==0)
            return 1;
            
        return -1;
    }


//{ Driver Code Starts.
int main()
{
      string S = "8";
        cout<<divisibleByEight(S)<<"\n";
     

     return 0;
}
// } Driver Code Ends