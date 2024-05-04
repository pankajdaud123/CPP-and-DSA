#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the number ";
int n;
cin>>n;
cout<<"Enter the elment ";
vector<int>v(n);
for(int i=0;i<n;i++){
cin>>v[i];
}

const int N= 1e5+10;
vector<int>freq(N,0);

for(int i=0;i<n;i++){
    freq[v[i]]++;
}
cout<<"Enter the Query ";
int q;
cin>>q;

while(q--){
int queryElement;
cin>>queryElement;
cout<<freq[queryElement];
cout<<endl;
} 
return 0;
}