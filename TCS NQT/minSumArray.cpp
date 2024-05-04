#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the size"<<endl;
    int n;
    int a[n];
    cin>>n;
    int sum=0,flag=0;
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
    if(a[i]==a[j]){
        a[i]=a[i]+1;
    }
    if(a[j]<0){
        flag=1;
    }
    }
}
for(int i=0;i<n;i++){
    sum+=a[i];
}
if(flag==1){
    cout<<"wrong input"<<endl;
}
else {
    cout<<sum<<endl;
}
return 0;
}