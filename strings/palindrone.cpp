#include <bits/stdc++.h>
using namespace std;

bool ispalindrone(string s) {
        int i=0;
        int j=s.size()-1;
        while (i < j) {
            if (s[i] != s[j])
                return false;
            i++;
            j--;
        }

        return true;
    }
int main(){
 string s="pankajdaud";
 string str=s.substr(2,5);
 cout<<str;

return 0;
}