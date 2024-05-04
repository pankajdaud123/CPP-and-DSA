#include <iostream>
using namespace std;

int pairSum(int a[],int n){
    int s=12;

    for(int i=0;i<n;i++){

        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){

         if(a[i]+a[j]+a[k]==s){
        cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
       }
            }
       
        }
    }

}



int main(){
int a[5]={ 1,2,3,4,5};
pairSum(a,5);

return 0;
}