    class Solution{
    public:
  
  
  int binarysearch(int arr[] , int X , int start , int end){

// base case 
if(start>end)
return -1;

int mid= start+(end-start)/2;

if(arr[mid]==X)
return 1;
else if(arr[mid]>X)
binarysearch(arr,X,start,mid-1);
else
return binarysearch(arr,X,mid+1,end);

}
  
  
  
    int searchInSorted(int arr[], int N, int K) 
    { 
    
       binarysearch(arr,K,0,N-1);
       
    }
};