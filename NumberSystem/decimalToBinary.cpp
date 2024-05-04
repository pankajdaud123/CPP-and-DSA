 #include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int ans=0;
int digit=0;
int power=1;
while(n>0){
    digit=n%2;
    ans+=digit*power;
    power*=10;
    n/=2;
    
}

cout<<ans<<endl;
return 0;
}
