#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={2,3,2,3,5};
    map<int,int> m;
    
        for(int i = 0; i < 5 ; i++){
            m[arr[i]]++;
        }
        // for(int i = 0; i < 5 ; i++){
        //     arr.at(i)=0;
        // }
        for(auto i : m){
            if(i.first <= 5)
            arr[i.first-1] = i.second;
        }
        






// m[0]= 2;
// m[1]= 3;
// m[2]= 2;
// m[3]=3;

// m.insert({4,5});
// for(auto i:m){
//     cout<<i.first-1<<" "<<i.second<<endl;
// }
// cout<<endl;


// m.erase(12);

// for(auto i:m){
//     cout<<i.first-1<<" "<<endl;
// }
// cout<<endl;

// cout<<" tell us present or not ->>"<<m.count(10);
// cout<<endl;

// auto it=m.find(3);

// for(auto i=it; i!=m.end();i++){
//     cout<<(*i).first<<" ";
// }


return 0;
}