#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>&v){
  cout<<"size "<<v.size()<<endl;
  for(int i=0;i<v.size();i++){
    cout<<v[i];
  }
  cout<<endl;
}
int main(){
    int N;
    cin>>N;
    vector<int>v[N];// create a N vector means N=3 then 3 vector is made;
    for(int i=0;i<N;++i){
       int n;
       cin>>n;
       for(int j=0;j<n;++j){
        int x;
        cin>>x;
        v[i].push_back(x);
       }
    }
    for(int i=0;i<N;i++){
   print(v[i]);
   }


}