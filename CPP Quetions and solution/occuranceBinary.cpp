int count(int arr[], int n, int x) {
	    int start=0;
	    int end=n-1;
	    int mid=start+(end-start/2);
	    while(start<end){
	    
	    if(arr[start]==x && arr[end]==x){
	        return end-start+1;
	       
	    }
	    
	    if(arr[mid]==x){
	        
	        if(arr[start]!=x){
	            start++;
	        }
	          if(arr[end]!=x){
	            end--;
	        }
	         
	        
	    }
	    
	    else if(arr[mid]<x){
	        start=mid+1;
	       
	    }
	    else {
	        end=mid-1;
	    }
	      mid=start+(end-start/2); 
	       
	    }
	} 