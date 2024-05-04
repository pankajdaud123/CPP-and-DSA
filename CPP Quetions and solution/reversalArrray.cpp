// #include <iostream>
// using namespace std;


// void reversal(int a[],int n){
// cout<<"the reversed of array "<<endl;
// for(int i=n-1;i>=0;i--){
//     cout<<a[i]<<" ";
// }

// }
// int main(){

// int a[10]={1,2,3,4,5,6,7,8,9,10};
// reversal(a,10);

// return 0;
// }  

// or

#include <iostream>
using namespace std;


void reversal(int a[],int n){
int start=0;
int end=n-1;
while(start<end){
swap(a[start],a[end]);
start++;
end--;
}
}


void printArray(int a[],int n){

for(int i=0;i<n;i++){
cout<<a[i]<<" "<<endl;

}
cout<<endl;
}


int main(){

int a[10]={1,2,3,4,5,6,7,8,9,10};
int b[5]={2,5,3,6,-5,};



reversal(a,10);
reversal(b,5);

printArray(a,10);
printArray(b,5);

return 0;
}  