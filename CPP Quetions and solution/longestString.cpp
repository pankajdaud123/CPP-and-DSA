#include<iostream>
using namespace std;
int lengthOfLongestSubstring(string s) {
 int mx=0;
 int n=s.size();
 
   for(int i=0;i<n;i++){

      vector<bool>visited(256);
      
      for(int j=i;j<n;j++){
        if(visited[s[j]]==true)
         break;
        
         else{
              mx= max(mx,j-i+1);
          visited[s[j]]=true;
         }

      }
      visited[s[i]]==false;
   }

   return mx; 
}


int main(){
string s;
cin>>s;

cout<<lengthOfLongestSubstring(s);

return 0;
}
