 #include <bits/stdc++.h>
using namespace std;

void updateOnes(int a[], int n, int updates[], int k)
    {
        // Your code goes here
         for(int i=0;i<k;i++)
            a[updates[i]-1]++;
         
           for(int i = 1; i < n; i++){
            a[i] += a[i - 1];
        }
    }

 
int main(){
int n;
  cout<<"Enter the N";
cin>>n;

int k;
  cout<<"Enter the k";
cin>>k;

int a[n]={0},update[k]={0};
for(int i=0;i<n;i++){
cin>>update[i];
}

updateOnes(a,n,update,k);

for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
    cout<<endl;
}

return 0;
}