//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  private:
	
	   void  solve(string s,string output,int index,vector<string>&ans){
	        
	        if(index>=s.length()){
	            ans.push_back(output);
	            return;
	        }
	        // exclusive
	        solve(s,output,index+1,ans);
	        
	        //include
	       char element=s[index];
	       output.push_back(element);
	       
	       solve(s,output,index+1,ans);
	       
	    }
	    public:
		vector<string> AllPossibleStrings(string s){
		    // Code here
		vector<string>ans;
		    string output;
		    int index=0;
		    
		   solve(s,output,index,ans);
		   
		   sort(ans.begin(),ans.end());
		   
		   return ans;
		    
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends