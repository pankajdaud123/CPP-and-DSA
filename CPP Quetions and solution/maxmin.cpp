#include <bits/stdc++.h>
using namespace  std;


int main(){

int a,b,c;
cout<<"Enter the value "<<endl;
cin>>a;
cout<<"Enter the value "<<endl;
cin>>b;
cout<<"Enter the value "<<endl;
cin>>c;
if (a>b)
{
    if (a>c)
    {
    cout<<"the maximum valur is "<<a;
    }
    else 
    cout<<"the maximum valur is "<<c;
}
else
{
      if (b>c)
      {
        cout<<"the maximum valur is "<<b;
      }
      else  
      cout<<"the maximum valur is "<<c;
}


return 0;
}