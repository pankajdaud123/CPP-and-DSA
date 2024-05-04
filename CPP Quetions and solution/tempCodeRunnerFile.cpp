int findPivot(int a[],int n){
int s=0;
int e=n-1;
int mid=s+(e-s)/2;
while(s<=e){
    int mid=s+(e-s)/2;

            if(a[mid] > a[mid + 1] )
                 mid++;
                return mid;
            
            if( a[mid] < a[mid - 1])
                return mid;


    if(a[mid]>a[s]){
        s=mid+1;
    }
    else{
        e=mid;
    }
  mid=s+(e-s)/2;
}
return -1;
}

int binarySearch(int a[],int s,int e,int key){
int start=s;
int end=e;
int mid=start+(end-start)/2;

while(start <= end){
if(key==a[mid]){

    return mid;
}
 if(key>a[mid]){
   start=mid+1;  
}
else{
    end=mid-1; 
}
mid=start+(end-start)/2;
}
return -1;
}
