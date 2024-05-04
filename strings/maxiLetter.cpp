//   code for maxi letter occurance
  int maxi;
        vector<int>freq(26,0);
        for(int i=0;i<str.size();i++){
           int index=str[i]-'a';
           freq[index]++; 
        }
        int num=freq.size();
        for(int i=0;i<26;i++){
            int maxi= max_element(freq, freq + num) - freq;
        }
        
        char ans=maxi+'a';
        return ans;