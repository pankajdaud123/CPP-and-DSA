#include <bits/stdc++.h>
using namespace std;

string countSort(string s){

    vector<int>freq(26,0);
     int n=s.size();

     //storing frequency of every cahracher in string 
    for(int i=0;i<n;i++){
        int index=s[i]-'a';
        freq[index]++;
    }
// create sort string 

int j=0;
for(int i=0;i<26;i++){
    while(freq[i]--){
  s[j++]=i+'a';
    }
}
return s;
}


int main(){
    string str;
    cin>>str;

cout<<countSort(str)<<endl;
return 0;
}



  int maxLetter(string str){
  
  
  int maxi;

  vector<int>freq(26,0);

  for(int i=0;i<str.length();i++){
     int index=str[i]-'a';
     freq[index]++;
  }
 int num=freq.size();
        for(int i=0;i<26;i++){
            int maxi= max_element(freq.begin(), freq.end()) - freq;
        }
        

char ans= maxi+'a';
return ans;
} 


        int main(){
        

        string s;
        cin>>s;

        cout<<maxLetter(s);


        return 0;
        }