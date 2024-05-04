#include<iostream>
using namespace std;

int main(){
 
  //input of first matrix
  int r1,c1;
  cin>>r1>>c1;
  int a1[r1][c1];
  for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
        cin>>a1[i][j];
    }
  }

// Output of 1sr matrix
cout<<"First matrix :-"<<endl;
 for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
        cout<<a1[i][j]<<" ";
    }
    cout<<endl;
  }

//input of second matrix
  int r2,c2;
  cin>>r2>>c2;
  int a2[r2][c2];
  for(int i=0;i<r2;i++){
    for(int j=0;j<c2;j++){
        cin>>a2[i][j];
    }
  }

// Output of second matrix
cout<<"second matrix :-"<<endl;
 for(int i=0;i<r2;i++){
    for(int j=0;j<c2;j++){
        cout<<a2[i][j]<<" ";
    }
    cout<<endl;
  }

  if(c1!=r2){
    cout<<"not possoblr"<<endl;
  }
// matrix   multiplication
  int a3[r1][c2];
  for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
        int value=0;
   for(int k=0;k<r2;k++){
  value+=a1[i][k]*a2[k][j];
   }
    a3[i][j]=value;
    }
  }
  
  cout<<"output of matrix multiplication"<<endl;;
   for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
   cout<<a3[i][j]<<"  ";
    }
    cout<<endl;
  }

  return 0;

}