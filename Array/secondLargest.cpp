 #include <bits/stdc++.h>
 using namespace std;
// logic 1st.
 int print2largest(int arr[], int n) {
        // code here
        int a1 = INT_MIN;
        for(int i = 0; i<n; i++){
            a1 = max(a1, arr[i]);
        }
        int ans = -1;
        for(int i = 0; i<n; i++){
            if(arr[i] != a1){
                ans = max(ans, arr[i]);
            }
        }
        return ans;
    }
//  logic 2nd
 	int print2largest2(int arr[], int n) {
	    int max1=-1;
	    int max2=-1;
	   for(int i=0;i<n;i++){
	       
	       if(arr[i]>max1){
	           max2=max1;
	          max1= arr[i];
	       }
	       else if(max1>arr[i] && max2<arr[i]){
	  
	            max2=arr[i];
	           }
	       }  
	   return max2;
	}


// logic 3rd.
 int largestElement(int a[],int n){
int maxIndex=-1;
    int maxi=0;
 for(int i=0;i<n;i++){
   if(a[i]>maxi){
   maxi=a[i];
    maxIndex=i;
   }
}
  return maxIndex;

 }

//  logic 4
int secondMax(int a[],int n){
    
    int max=INT_MIN;
    int max2=INT_MIN;

    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }

    for(int i=0;i<n;i++){

        if(a[i]>max2 && a[i]!=max){
            max2=a[i];
        }
    }
  return max2;

}

 int main(){
    int a[]={1000,4,5,999,100,1};
    int n=6;

    // int largeElement=secondMax(a,n);
   
    // int max1=a[largeElement];
    // for(int i=0;i<n;i++){
    //     if(max1==a[i]){
    //      a[i]=-1;
    //     }
    // }
    // int IndexSecondlargeElement=largestElement(a,n);
    // cout<<a[IndexSecondlargeElement]<<endl;
    cout<<secondMax(a,n);
 return 0;
 }