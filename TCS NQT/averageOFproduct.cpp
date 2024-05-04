#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<pair<string,pair<float,int>>>sales(n);
  string product_name;
  float prices;
  int quntity;
  for(int i=0;i<n;i++){
   cin>>product_name>>prices>>quntity;
   sales[i].first=         product_name;
   sales[i].second.first=  prices;
   sales[i].second.second= quntity;
    
//   cout<<sales[i].first<<" "<<sales[i].second.first<<" "<<sales[i].second.second<<endl;

  }
   
  float total_sales;
  float average_sales;

   string Best_product;

  for(int i=0;i<n;i++){
    total_sales+=(sales[i].second.first * sales[i].second.second);

  }
  average_sales= (total_sales/n);

  unordered_map<string,float>mp;
  float max_sales= INT_MIN;
  for(int i=0;i<n;i++){
    mp[sales[i].first]+=(sales[i].second.first * sales[i].second.second);

    if(max_sales< mp[sales[i].first]){

        max_sales= mp[sales[i].first];
        Best_product = sales[i].first;
    }

  }


  printf("Total Sale: %0.2f Average Sale: %0.2f ", total_sales, average_sales);
    cout<<"Best Product: "<<Best_product;

    return 0;
}