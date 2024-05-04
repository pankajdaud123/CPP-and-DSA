#include<bits/stdc++.h>
using namespace std;
//  bottom up  approach // recursion + memoization
int fibo(int n,vector<int>&dp){

    if(n<=1){
        return 1;
    }
    // step 3
    if(dp[n]!=-1)
     return dp[n];

//   step 2
    dp[n]=fibo(n-1,dp)+fibo(n-2,dp);
    return dp[n];
}

// top down approach // tabolization


int fibonacci(int n,vector<int>&dp){
dp[0]=0;
dp[1]=1;

for(int i=2;i<=n;i++){
    dp[i]=dp[i-1]+dp[i-2];
}
return dp[n];
}


int main(){
    int n;
    cin>>n;
    // step 1
    vector<int>dp(n+1,-1);
    cout<<fibonacci(n,dp);
    

    return 0;
}


