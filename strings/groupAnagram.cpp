class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        unordered_map<char, int> freq;
        for (int i = 0; i < s.size(); i++) {
            freq[s[i]]++;
            freq[t[i]]--;
        }

        for (auto it : freq) {
            if (it.second != 0) {
                return false;
            }
        }

        return true;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         sort(strs.begin(),strs.end());
        vector<vector<string>> ans;
        int i = 0;
        while (i <strs.size()) {
            if (strs[i] == " ") {
                ++i;
            }
            vector<string> temp;
            temp.push_back(strs[i]);
            for (int j = i + 1; j <strs.size(); j++) {
                if (isAnagram(strs[i], strs[j])) {
                   temp.push_back(strs[j]);
                     cout<<strs[j]<<endl;
                      strs[j] = " ";
                }
            }
            //  if(ans.size()>1 )
            // ans.pop_back();
            ans.push_back(temp);
            ++i;
        }
        return ans;
    }
};