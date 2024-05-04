#include <iostream>
#include <queue>

using namespace std;
int main(){
    priority_queue<int> max;
    priority_queue<int,vector<int>,greater<int>  > min;

max.push(9);
max.push(2);
max.push(8);
max.push(6);
max.push(5);

int n=max.size();

for(int i=0;i<n;i++){

  cout<<max.top()<<endl;
  max.pop();
} cout<<endl;

min.push(9);
min.push(2);
min.push(8);
min.push(6);
min.push(5);

int m=min.size();

for(int i=0;i<m;i++){

  cout<<min.top()<<endl;
  min.pop();

}

cout<<"Empty or not:"<<min.empty()<<endl;

return 0;
}