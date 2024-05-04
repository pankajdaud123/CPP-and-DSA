class Solution {
private:
    void isSubstring(string s1, string s2) {

        int n = s1.size();
        int m = s2.size();

        int i = 0;
        int j = 0;
        int k = m - n;
        while (j < m) {
        }
    }
    vector<string> solve(string s, int index) {
        vector<string> ans;

        if (index >= s.size()) {
            ans.push_back(s);
            return ans;
        }

        for (int i = index; i < s.size(); i++) {
            swap(s[i], s[index]);
            solve(s, index + 1);
            // backtracking
            swap(s[i], s[index]);
        }

        return ans;
    }

public:
    bool checkInclusion(string s1, string s2) {
        int index = 0;
        vector<string> ans = solve(s1, index);

        for (int i = 0; i < ans.size(); i++) {
            string current = ans[i];
            if (isSubstring(current, s2)) {
                return true;
            }
        }

        return false;
    }
};
 not working see leetcode account 

//  solution 
class Solution {
private:
  
  bool allZero(int arr[]){
   for(int i=0;i<26;i++){
    if(arr[i]!=0) {
        return false;
    }
   }
  return true;
  }

public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        int  m=s2.size();
        int arr[26]={0};
      for(int i=0;i<s1.size();i++){
        arr[s1[i]-'a']++;
      }

      for(int j=0;j<m;j++){
       arr[s2[j]-'a']--;

      if(j-n>= 0) 
       arr[s2[j-n]-'a']++;
      
    if(allZero(arr)) return true;
      }

  return false;
        
    }
};